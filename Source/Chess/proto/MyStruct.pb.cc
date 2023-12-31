// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MyStruct.proto

#include "MyStruct.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace PROTOCOL {
constexpr Player::Player(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : id_(uint64_t{0u})
  , wincount_(uint64_t{0u})
  , losecount_(uint64_t{0u})
  , playertype_(0)
{}
struct PlayerDefaultTypeInternal {
  constexpr PlayerDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PlayerDefaultTypeInternal() {}
  union {
    Player _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PlayerDefaultTypeInternal _Player_default_instance_;
constexpr Room::Room(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : players_()
  , roomname_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(uint64_t{0u})
  , playercount_(uint64_t{0u}){}
struct RoomDefaultTypeInternal {
  constexpr RoomDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RoomDefaultTypeInternal() {}
  union {
    Room _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RoomDefaultTypeInternal _Room_default_instance_;
constexpr RoomList::RoomList(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : rooms_(){}
struct RoomListDefaultTypeInternal {
  constexpr RoomListDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RoomListDefaultTypeInternal() {}
  union {
    RoomList _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RoomListDefaultTypeInternal _RoomList_default_instance_;
}  // namespace PROTOCOL
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_MyStruct_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_MyStruct_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MyStruct_2eproto = nullptr;

const uint32_t TableStruct_MyStruct_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Player, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Player, id_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Player, wincount_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Player, losecount_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Player, playertype_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Room, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Room, id_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Room, roomname_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Room, playercount_),
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::Room, players_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::RoomList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PROTOCOL::RoomList, rooms_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::PROTOCOL::Player)},
  { 10, -1, -1, sizeof(::PROTOCOL::Room)},
  { 20, -1, -1, sizeof(::PROTOCOL::RoomList)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PROTOCOL::_Player_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PROTOCOL::_Room_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PROTOCOL::_RoomList_default_instance_),
};

const char descriptor_table_protodef_MyStruct_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016MyStruct.proto\022\010PROTOCOL\032\014MyEnum.proto"
  "\"h\n\006Player\022\n\n\002id\030\001 \001(\004\022\020\n\010winCount\030\002 \001(\004"
  "\022\021\n\tloseCount\030\003 \001(\004\022-\n\nplayerType\030\004 \001(\0162"
  "\031.PROTOCOL.PlayerStateType\"\\\n\004Room\022\n\n\002id"
  "\030\001 \001(\004\022\020\n\010roomName\030\002 \001(\t\022\023\n\013playerCount\030"
  "\003 \001(\004\022!\n\007players\030\004 \003(\0132\020.PROTOCOL.Player"
  "\")\n\010RoomList\022\035\n\005rooms\030\001 \003(\0132\016.PROTOCOL.R"
  "oomb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_MyStruct_2eproto_deps[1] = {
  &::descriptor_table_MyEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MyStruct_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MyStruct_2eproto = {
  false, false, 291, descriptor_table_protodef_MyStruct_2eproto, "MyStruct.proto", 
  &descriptor_table_MyStruct_2eproto_once, descriptor_table_MyStruct_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_MyStruct_2eproto::offsets,
  file_level_metadata_MyStruct_2eproto, file_level_enum_descriptors_MyStruct_2eproto, file_level_service_descriptors_MyStruct_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_MyStruct_2eproto_getter() {
  return &descriptor_table_MyStruct_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_MyStruct_2eproto(&descriptor_table_MyStruct_2eproto);
namespace PROTOCOL {

// ===================================================================

class Player::_Internal {
 public:
};

Player::Player(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PROTOCOL.Player)
}
Player::Player(const Player& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&playertype_) -
    reinterpret_cast<char*>(&id_)) + sizeof(playertype_));
  // @@protoc_insertion_point(copy_constructor:PROTOCOL.Player)
}

inline void Player::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&playertype_) -
    reinterpret_cast<char*>(&id_)) + sizeof(playertype_));
}

Player::~Player() {
  // @@protoc_insertion_point(destructor:PROTOCOL.Player)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Player::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Player::ArenaDtor(void* object) {
  Player* _this = reinterpret_cast< Player* >(object);
  (void)_this;
}
void Player::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Player::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Player::Clear() {
// @@protoc_insertion_point(message_clear_start:PROTOCOL.Player)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&playertype_) -
      reinterpret_cast<char*>(&id_)) + sizeof(playertype_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Player::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 winCount = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          wincount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 loseCount = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          losecount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .PROTOCOL.PlayerStateType playerType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_playertype(static_cast<::PROTOCOL::PlayerStateType>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Player::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PROTOCOL.Player)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // uint64 winCount = 2;
  if (this->_internal_wincount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_wincount(), target);
  }

  // uint64 loseCount = 3;
  if (this->_internal_losecount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_losecount(), target);
  }

  // .PROTOCOL.PlayerStateType playerType = 4;
  if (this->_internal_playertype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_playertype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PROTOCOL.Player)
  return target;
}

size_t Player::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PROTOCOL.Player)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_id());
  }

  // uint64 winCount = 2;
  if (this->_internal_wincount() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_wincount());
  }

  // uint64 loseCount = 3;
  if (this->_internal_losecount() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_losecount());
  }

  // .PROTOCOL.PlayerStateType playerType = 4;
  if (this->_internal_playertype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_playertype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Player::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Player::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Player::GetClassData() const { return &_class_data_; }

void Player::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Player *>(to)->MergeFrom(
      static_cast<const Player &>(from));
}


void Player::MergeFrom(const Player& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PROTOCOL.Player)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_wincount() != 0) {
    _internal_set_wincount(from._internal_wincount());
  }
  if (from._internal_losecount() != 0) {
    _internal_set_losecount(from._internal_losecount());
  }
  if (from._internal_playertype() != 0) {
    _internal_set_playertype(from._internal_playertype());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Player::CopyFrom(const Player& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PROTOCOL.Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Player::IsInitialized() const {
  return true;
}

void Player::InternalSwap(Player* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Player, playertype_)
      + sizeof(Player::playertype_)
      - PROTOBUF_FIELD_OFFSET(Player, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Player::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_MyStruct_2eproto_getter, &descriptor_table_MyStruct_2eproto_once,
      file_level_metadata_MyStruct_2eproto[0]);
}

// ===================================================================

class Room::_Internal {
 public:
};

Room::Room(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  players_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PROTOCOL.Room)
}
Room::Room(const Room& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      players_(from.players_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  roomname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    roomname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_roomname().empty()) {
    roomname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_roomname(), 
      GetArenaForAllocation());
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&playercount_) -
    reinterpret_cast<char*>(&id_)) + sizeof(playercount_));
  // @@protoc_insertion_point(copy_constructor:PROTOCOL.Room)
}

inline void Room::SharedCtor() {
roomname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  roomname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&playercount_) -
    reinterpret_cast<char*>(&id_)) + sizeof(playercount_));
}

Room::~Room() {
  // @@protoc_insertion_point(destructor:PROTOCOL.Room)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Room::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  roomname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Room::ArenaDtor(void* object) {
  Room* _this = reinterpret_cast< Room* >(object);
  (void)_this;
}
void Room::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Room::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Room::Clear() {
// @@protoc_insertion_point(message_clear_start:PROTOCOL.Room)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  players_.Clear();
  roomname_.ClearToEmpty();
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&playercount_) -
      reinterpret_cast<char*>(&id_)) + sizeof(playercount_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Room::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string roomName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_roomname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PROTOCOL.Room.roomName"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 playerCount = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          playercount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .PROTOCOL.Player players = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_players(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Room::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PROTOCOL.Room)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_id(), target);
  }

  // string roomName = 2;
  if (!this->_internal_roomname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_roomname().data(), static_cast<int>(this->_internal_roomname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "PROTOCOL.Room.roomName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_roomname(), target);
  }

  // uint64 playerCount = 3;
  if (this->_internal_playercount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_playercount(), target);
  }

  // repeated .PROTOCOL.Player players = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_players_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_players(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PROTOCOL.Room)
  return target;
}

size_t Room::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PROTOCOL.Room)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .PROTOCOL.Player players = 4;
  total_size += 1UL * this->_internal_players_size();
  for (const auto& msg : this->players_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string roomName = 2;
  if (!this->_internal_roomname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_roomname());
  }

  // uint64 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_id());
  }

  // uint64 playerCount = 3;
  if (this->_internal_playercount() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_playercount());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Room::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Room::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Room::GetClassData() const { return &_class_data_; }

void Room::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Room *>(to)->MergeFrom(
      static_cast<const Room &>(from));
}


void Room::MergeFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PROTOCOL.Room)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  players_.MergeFrom(from.players_);
  if (!from._internal_roomname().empty()) {
    _internal_set_roomname(from._internal_roomname());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from._internal_playercount() != 0) {
    _internal_set_playercount(from._internal_playercount());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Room::CopyFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PROTOCOL.Room)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Room::IsInitialized() const {
  return true;
}

void Room::InternalSwap(Room* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  players_.InternalSwap(&other->players_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &roomname_, lhs_arena,
      &other->roomname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Room, playercount_)
      + sizeof(Room::playercount_)
      - PROTOBUF_FIELD_OFFSET(Room, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Room::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_MyStruct_2eproto_getter, &descriptor_table_MyStruct_2eproto_once,
      file_level_metadata_MyStruct_2eproto[1]);
}

// ===================================================================

class RoomList::_Internal {
 public:
};

RoomList::RoomList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  rooms_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PROTOCOL.RoomList)
}
RoomList::RoomList(const RoomList& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      rooms_(from.rooms_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:PROTOCOL.RoomList)
}

inline void RoomList::SharedCtor() {
}

RoomList::~RoomList() {
  // @@protoc_insertion_point(destructor:PROTOCOL.RoomList)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RoomList::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void RoomList::ArenaDtor(void* object) {
  RoomList* _this = reinterpret_cast< RoomList* >(object);
  (void)_this;
}
void RoomList::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RoomList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RoomList::Clear() {
// @@protoc_insertion_point(message_clear_start:PROTOCOL.RoomList)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rooms_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RoomList::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .PROTOCOL.Room rooms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rooms(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RoomList::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PROTOCOL.RoomList)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .PROTOCOL.Room rooms = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rooms_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_rooms(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PROTOCOL.RoomList)
  return target;
}

size_t RoomList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PROTOCOL.RoomList)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .PROTOCOL.Room rooms = 1;
  total_size += 1UL * this->_internal_rooms_size();
  for (const auto& msg : this->rooms_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RoomList::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RoomList::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RoomList::GetClassData() const { return &_class_data_; }

void RoomList::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RoomList *>(to)->MergeFrom(
      static_cast<const RoomList &>(from));
}


void RoomList::MergeFrom(const RoomList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PROTOCOL.RoomList)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  rooms_.MergeFrom(from.rooms_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RoomList::CopyFrom(const RoomList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PROTOCOL.RoomList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RoomList::IsInitialized() const {
  return true;
}

void RoomList::InternalSwap(RoomList* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  rooms_.InternalSwap(&other->rooms_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RoomList::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_MyStruct_2eproto_getter, &descriptor_table_MyStruct_2eproto_once,
      file_level_metadata_MyStruct_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace PROTOCOL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PROTOCOL::Player* Arena::CreateMaybeMessage< ::PROTOCOL::Player >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PROTOCOL::Player >(arena);
}
template<> PROTOBUF_NOINLINE ::PROTOCOL::Room* Arena::CreateMaybeMessage< ::PROTOCOL::Room >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PROTOCOL::Room >(arena);
}
template<> PROTOBUF_NOINLINE ::PROTOCOL::RoomList* Arena::CreateMaybeMessage< ::PROTOCOL::RoomList >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PROTOCOL::RoomList >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
