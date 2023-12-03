#include "ChessController.h"
#include "tile.h"
#include "ChessBoard.h"
#include "ChessPlayer.h"
#include "ChessPointsWidget.h"
#include "WinningScreenWidget.h"
#include "ChessHUD.h"
#include "Misc/DateTime.h"
#include "Misc/FileHelper.h"
#include "ChessGameModeBase.h"
#include "ReplayChessUserWidget.h"
#include "WinningScreenWidget.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include <Components/TextBlock.h>
#include "Projection2D.h"

AChessController::AChessController() {
	DefaultMouseCursor = EMouseCursor::Default;
	bShowMouseCursor = true;						// Show mouse cursor
		// Set mouse cursor as default

	static ConstructorHelpers::FObjectFinder<UMaterial> Material (TEXT("Material'/Game/Materials/Highlights/Select_Highlight.Select_Highlight'"));
	if (Material.Object != NULL) SelectedMaterial = (UMaterial*)Material.Object;

	// 맵에 고정되어 있는 플레이어를 가져와서 
	// m_Player1 = 인게임 플레이어W
	// m_Player2 = 인게임 플레이어B
	TArray <AActor*> FoundPlayers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AChessPlayer::StaticClass(), FoundPlayers);
	AChessPlayer* temp;
	for (int i = 0; i < FoundPlayers.Num(); ++i) {
		temp = Cast <AChessPlayer>(FoundPlayers[i]);
		if (temp != nullptr) {
			if (temp->isWhite()) 
				PlayerOne = temp;
			else 
				PlayerTwo = temp;
		}
	}

	// 플레이어1부터 시작이라 플레이어1에다가 컨트롤러 붙임
	CurrentPlayer = PlayerOne;
	Possess(PlayerOne);

	// 뒷정리 밑 보드 가져옴
	FoundPlayers.Empty();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AChessBoard::StaticClass(), FoundPlayers);
	if (FoundPlayers.Num() > 0)
		ChessBoard = Cast <AChessBoard>(FoundPlayers[0]);
}

void AChessController::BeginPlay() {
	Super::BeginPlay();

	// 전체 위젯 붙이고 뭐 뒷작업 하는 듯
	HUD = Cast <AChessHUD>(GetHUD());
	TextFileDirectory = FPaths::ProjectDir() / (FString(TEXT("Content/GameplayResult/")) + FDateTime::Now().ToString() + FString(TEXT(".txt")));
	
	/*
		Atile* AChessController::SelectedGrid;
		현재 선택된 타일인 SelectedGrid를 임의로 선택할 수가 있다

		SelectedGrid = ChessBoard->TilesCollection[12];
		SelectedGrid->highlight();
	*/
}

void AChessController::SetupInputComponent() {
	Super::SetupInputComponent();

	//Binds key actions to functions
	InputComponent->BindAction("LeftClick", IE_Pressed, this, &AChessController::OnLeftMouseClick);
	InputComponent->BindAction("LeftClick", IE_Released, this, &AChessController::OnLeftMouseRelease);

	InputComponent->BindAction("RightClick", IE_Pressed, this, &AChessController::OnRightMouseClick);
}

void AChessController::OnLeftMouseClick() {
	// 클릭을 했는데 선택되어 있던 피스가 있다면 다시 원래 색깔로
	if (this->SelectedPiece != nullptr) {
		this->SelectedPiece->SetDeselected();
	}

	// 이동 가능한 블록을 표시해주던 것을 unhighlight()
	Deselect();
	// 선택된 기물이 있는지, 있으면 멤버변수 선택된 기물에 해당 기물을 적재하고, 
	// 해당 기물과 기물이 이동할 수 있는 곳을 하이라이트
	SelectPiece();

	// 선택된 기물이 있으면 기물의 소유자와 현재의 플레이어가 동일한 지 체크 후
	if (SelectedPiece != nullptr) {
		if (SelectedPiece->isWhite() == CurrentPlayer->isWhite()) {
			isPending = true;
			// 기물의 인게임 위치를 가져옴
			PieceLocation = SelectedPiece->GetActorLocation();

			CurrentPlayer->isPending = true;
			// 플레이어에서 선택된 기물 설정
			CurrentPlayer->setCurrentPiece(SelectedPiece);

			// 마우스 커서 모양 바꿈
			CurrentMouseCursor = EMouseCursor::GrabHandClosed;

			// 해당 기물 오브젝트를 옮겨야 되니까 충돌끄고 겹치기 되고 뭐 하는 듯
			SelectedPiece->setOverlap(true);
			SelectedPiece->StaticMesh->SetSimulatePhysics(false);
		}
	}
}

void AChessController::OnLeftMouseRelease() {
	FVector CurrentPieceLocation;
	if (SelectedPiece != nullptr)
		CurrentPieceLocation = SelectedPiece->GetActorLocation();

	if (CurrentPieceLocation.X >= 300 && CurrentPieceLocation.X <= 1900) {
		if (CurrentPieceLocation.Y >= -300 && CurrentPieceLocation.Y <= 1300) {
			int Row = round((1800 - CurrentPieceLocation.X) / 200);
			int Column = round((1200 - CurrentPieceLocation.Y) / 200);
			int index = (Row * 8) + Column;
			SelectedGrid = ChessBoard->TilesCollection[index];
			for (Atile* Grid : SelectableGrids) {
				if (SelectedGrid == Grid) {// Checks if the grid selected is selectable
					SelectedPiece->neverMove = false;
					CurrentPlayer->isPending = false;
					CurrentPlayer->setCurrentPiece(nullptr);
					isPending = false;
					isPending = false;
					SelectedPiece->setOverlap(false);
					MakeMove();
					Deselect();
					SelectableGrids.Empty(); // Empty previous records.
					EliminatePieces.Empty(); // Empty previous records.
					break;
				}
			}
		}
	}

	if (isPending == true && SelectedPiece != nullptr) {
		SelectedPiece->SetActorLocation(PieceLocation, false, nullptr, ETeleportType::TeleportPhysics);
		isPending = false;
		SelectedPiece->setOverlap(false);
	}
	
	CurrentPlayer->mousePosition.X = NULL;
	CurrentPlayer->mousePosition.Y = NULL;
	CurrentPlayer->setCurrentPiece(nullptr);
	CurrentMouseCursor = DefaultMouseCursor;
}

void AChessController::OnRightMouseClick() {
	// 이동 가능 표시해 주던 highlight를 off
	Deselect();

	// 마우스 우클릭을 한 지점의 정보를 받아옴
	FHitResult RightClickResult(ForceInit); // Will hold hit result
	GetHitResultUnderCursor(ECollisionChannel::ECC_WorldStatic, true, RightClickResult); // Get hit result and assign it to TraceResult

	// 마우스 우클릭을 한 것이 기물이라면
	if (RightClickResult.GetActor() != nullptr) {
		// 우클릭된 지점의 타일을 받아와서 해당 타일을 찾은 뒤
		SelectedGrid = Cast <Atile>(RightClickResult.GetActor());
		for (Atile* Grid : SelectableGrids) { 
			if (SelectedGrid == Grid) {// Checks if the grid selected is selectable
				SelectedPiece->setOverlap(false);
				SelectedPiece->neverMove = false;
				CurrentPlayer->isPending = false;
				isPending = false;
				MakeMove();
				CurrentPlayer->setCurrentPiece(nullptr);
			}
		}
	}
	SelectableGrids.Empty(); // Empty previous records.
	EliminatePieces.Empty(); // Empty previous records.
}

void AChessController::SelectPiece() {
	/* Detects clicked area */
	// 커서로 클릭한 오브젝트를 가져와서 TraceResult에 넣는 듯
	FHitResult TraceResult(ForceInit); // Will hold hit result
	GetHitResultUnderCursor(ECollisionChannel::ECC_WorldDynamic, true, TraceResult); // Get hit result and assign it to TraceResult

	// If Hit Target was a an Actor.
	// 클릭된 오브젝트가 액터(체스말)라면?
	if (TraceResult.GetActor() != nullptr) {
		if (TraceResult.GetActor()->IsA(AChessPiece_Base::StaticClass())) {
			// 체스말로 형변환하고, 선택된 말의 색깔과, 플레이어의 색깔이 같은지 체크해서 같다면
			// 
			SelectedPiece = Cast<AChessPiece_Base>(TraceResult.GetActor());
			if (SelectedPiece != nullptr) { 
				if (SelectedPiece->isWhite() == CurrentPlayer->isWhite()) {
					// 선택된 기물이 있다는 플래그 true
					IsAnythingSelected = true;

					// 해당 오브젝트 하이라이트 처리
					SelectedPiece->SetSelected();
					// 해당 오브젝트가 갈 수 있는 곳 하이라이트 처리
					HighlightSelectableGrids();

					isPending = true;
					return;
				}
			}
		}
	}
	// 클릭된 오브젝트가 액터가 아니거나, 위의 하이라이트 작업이 끝나면 다시 선택된 기물 플래그를 off
	IsAnythingSelected = false;
}

void AChessController::HighlightSelectableGrids() {
	if (IsAnythingSelected == false)
		return;

	SelectableGrids.Empty(); // Empty previous records.
	EliminatePieces.Empty(); // Empty previous records.

	SelectedPiece->DetectSelectableGrids(&SelectableGrids);
	for (int i = 0; i < SelectableGrids.Num(); ++i) {
		SelectableGrids[i]->highlight();
	}
}

void AChessController::Deselect() {
	for (int32 index = 0; index < SelectableGrids.Num(); index++)
		SelectableGrids[index]->unhighlight();

	SelectedGrid = nullptr;
}

void AChessController::SwitchPlayer() {
	if (CurrentPlayer == PlayerTwo) {
		PreviousPlayer = PlayerTwo;
		CurrentPlayer = PlayerOne;
		Possess(PlayerOne);
	}
	else if (CurrentPlayer == PlayerOne) {
		PreviousPlayer = PlayerOne;
		CurrentPlayer = PlayerTwo;
		Possess(PlayerTwo);
	}
}

AChessPlayer* AChessController::GetCurrentPlayer(){
	return CurrentPlayer;
}

AChessPlayer* AChessController::GetPlayerOne() {
	return PlayerOne;
}

AChessPlayer* AChessController::GetPlayerTwo() {
	return PlayerTwo;
}

void AChessController::MakeMove() {
	// 적을 취하였는가
	bool take = false;
	// 선택한 지점이 기물이 있는 지점이라면(적)
	if (SelectedGrid->isOccupied()) {
		take = true;
		// 적을 취한 것이 플레이어1이면
		if (CurrentPlayer == PlayerOne) {
			HUD->widgetPoint1->addScore(SelectedGrid->currentOccupyingPiece->getPiecePoint());
			PlayerOne->addScore(SelectedGrid->currentOccupyingPiece->getPiecePoint());
		}
		// 적을 취한 것이 플레이어2이면
		else if (CurrentPlayer == PlayerTwo) {
			HUD->widgetPoint2->addScore(SelectedGrid->currentOccupyingPiece->getPiecePoint());
			PlayerTwo->addScore(SelectedGrid->currentOccupyingPiece->getPiecePoint());
		}
		// 선택된 지점에서 현재 기물을 제거해라
		SelectedGrid->currentOccupyingPiece->Discard();
	}

	// 이동 전 좌표
	int32 Column = round((1800 - SelectedPiece->tileOccupied->GetActorLocation().X) / 200);
	int32 Row = round((1200 - SelectedPiece->tileOccupied->GetActorLocation().Y) / 200);
	
	FString fromCoordinate = "A";
	fromCoordinate[0] = (*fromCoordinate.GetCharArray().GetData()) + Row;
	fromCoordinate += FString::FromInt(Column+1);
	FString from = fromCoordinate;

	SelectedPiece->tileOccupied->unoccupy();
	SelectedGrid->occupy(SelectedPiece);

	// 이동 후 좌표
	Column = round((1800 - SelectedGrid->GetActorLocation().X) / 200);
	Row = round((1200 - SelectedGrid->GetActorLocation().Y) / 200);

	FString toCoordinate = "A";
	toCoordinate[0] = (*toCoordinate.GetCharArray().GetData()) + Row;
	toCoordinate += FString::FromInt(Column+1);
	FString to = toCoordinate;
	fromCoordinate += " " + toCoordinate;
	
	if (take) {
		fromCoordinate += "(take)";
	}
	HUD->projection2DWidget->update2DBoard(from, to, take);
	GameLog.Add(fromCoordinate);
	if (CurrentPlayer->getScore() >= 100 && !endGame) {
		CurrentPlayer->addScore(-100);
		if (CurrentPlayer == PlayerOne)
			HUD->widgetPoint1->addScore(-100);
		else if (CurrentPlayer == PlayerTwo)
			HUD->widgetPoint2->addScore(-100);
		HUD->showWinningScreen();
		HUD->winningScreen->Ratio->SetText(FText::FromString(FString::FromInt(PlayerOne->getScore()) + ":" + FString::FromInt(PlayerTwo->getScore())));
		if (CurrentPlayer == PlayerOne)
			HUD->winningScreen->SetWinner("Player 1");
		else
			HUD->winningScreen->SetWinner("Player 2");
		GameLog.Add(FString::FromInt(PlayerOne->getScore()) + ":" + FString::FromInt(PlayerTwo->getScore()));
		FFileHelper::SaveStringArrayToFile(GameLog, *TextFileDirectory, FFileHelper::EEncodingOptions::ForceUTF8);
		endGame = true;
		GameLog.Empty();
		TextFileDirectory = FPaths::ProjectDir() / (FString(TEXT("Content/GameplayResult/")) + FDateTime::Now().ToString() + FString(TEXT(".txt")));
	}
	else {
		Deselect();
		SwitchPlayer(); // Switch player 

		SelectedPiece = nullptr;
	}
}

bool AChessController::getPending() {
	return isPending;
}