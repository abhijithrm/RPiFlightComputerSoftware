// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoData.proto

#ifndef PROTOBUF_INCLUDED_ProtoData_2eproto
#define PROTOBUF_INCLUDED_ProtoData_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ProtoData_2eproto 

namespace protobuf_ProtoData_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ProtoData_2eproto
class Command;
class CommandDefaultTypeInternal;
extern CommandDefaultTypeInternal _Command_default_instance_;
class DataPoint;
class DataPointDefaultTypeInternal;
extern DataPointDefaultTypeInternal _DataPoint_default_instance_;
class DroneData;
class DroneDataDefaultTypeInternal;
extern DroneDataDefaultTypeInternal _DroneData_default_instance_;
class MissionData;
class MissionDataDefaultTypeInternal;
extern MissionDataDefaultTypeInternal _MissionData_default_instance_;
namespace google {
namespace protobuf {
template<> ::Command* Arena::CreateMaybeMessage<::Command>(Arena*);
template<> ::DataPoint* Arena::CreateMaybeMessage<::DataPoint>(Arena*);
template<> ::DroneData* Arena::CreateMaybeMessage<::DroneData>(Arena*);
template<> ::MissionData* Arena::CreateMaybeMessage<::MissionData>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Command : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Command) */ {
 public:
  Command();
  virtual ~Command();

  Command(const Command& from);

  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Command(Command&& from) noexcept
    : Command() {
    *this = ::std::move(from);
  }

  inline Command& operator=(Command&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Command& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Command* internal_default_instance() {
    return reinterpret_cast<const Command*>(
               &_Command_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Command* other);
  friend void swap(Command& a, Command& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Command* New() const final {
    return CreateMaybeMessage<Command>(NULL);
  }

  Command* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Command>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Command& from);
  void MergeFrom(const Command& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Command* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes payload = 2;
  void clear_payload();
  static const int kPayloadFieldNumber = 2;
  const ::std::string& payload() const;
  void set_payload(const ::std::string& value);
  #if LANG_CXX11
  void set_payload(::std::string&& value);
  #endif
  void set_payload(const char* value);
  void set_payload(const void* value, size_t size);
  ::std::string* mutable_payload();
  ::std::string* release_payload();
  void set_allocated_payload(::std::string* payload);

  // int32 code = 1;
  void clear_code();
  static const int kCodeFieldNumber = 1;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Command)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr payload_;
  ::google::protobuf::int32 code_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ProtoData_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DroneData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DroneData) */ {
 public:
  DroneData();
  virtual ~DroneData();

  DroneData(const DroneData& from);

  inline DroneData& operator=(const DroneData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DroneData(DroneData&& from) noexcept
    : DroneData() {
    *this = ::std::move(from);
  }

  inline DroneData& operator=(DroneData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DroneData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DroneData* internal_default_instance() {
    return reinterpret_cast<const DroneData*>(
               &_DroneData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DroneData* other);
  friend void swap(DroneData& a, DroneData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DroneData* New() const final {
    return CreateMaybeMessage<DroneData>(NULL);
  }

  DroneData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DroneData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DroneData& from);
  void MergeFrom(const DroneData& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DroneData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string state = 6;
  void clear_state();
  static const int kStateFieldNumber = 6;
  const ::std::string& state() const;
  void set_state(const ::std::string& value);
  #if LANG_CXX11
  void set_state(::std::string&& value);
  #endif
  void set_state(const char* value);
  void set_state(const char* value, size_t size);
  ::std::string* mutable_state();
  ::std::string* release_state();
  void set_allocated_state(::std::string* state);

  // string drone_id = 8;
  void clear_drone_id();
  static const int kDroneIdFieldNumber = 8;
  const ::std::string& drone_id() const;
  void set_drone_id(const ::std::string& value);
  #if LANG_CXX11
  void set_drone_id(::std::string&& value);
  #endif
  void set_drone_id(const char* value);
  void set_drone_id(const char* value, size_t size);
  ::std::string* mutable_drone_id();
  ::std::string* release_drone_id();
  void set_allocated_drone_id(::std::string* drone_id);

  // double latitude = 2;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 2;
  double latitude() const;
  void set_latitude(double value);

  // float altitude = 1;
  void clear_altitude();
  static const int kAltitudeFieldNumber = 1;
  float altitude() const;
  void set_altitude(float value);

  // float voltage = 4;
  void clear_voltage();
  static const int kVoltageFieldNumber = 4;
  float voltage() const;
  void set_voltage(float value);

  // double longitude = 3;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 3;
  double longitude() const;
  void set_longitude(double value);

  // float speed = 5;
  void clear_speed();
  static const int kSpeedFieldNumber = 5;
  float speed() const;
  void set_speed(float value);

  // int32 video_port = 7;
  void clear_video_port();
  static const int kVideoPortFieldNumber = 7;
  ::google::protobuf::int32 video_port() const;
  void set_video_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DroneData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr state_;
  ::google::protobuf::internal::ArenaStringPtr drone_id_;
  double latitude_;
  float altitude_;
  float voltage_;
  double longitude_;
  float speed_;
  ::google::protobuf::int32 video_port_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ProtoData_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DataPoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DataPoint) */ {
 public:
  DataPoint();
  virtual ~DataPoint();

  DataPoint(const DataPoint& from);

  inline DataPoint& operator=(const DataPoint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DataPoint(DataPoint&& from) noexcept
    : DataPoint() {
    *this = ::std::move(from);
  }

  inline DataPoint& operator=(DataPoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DataPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DataPoint* internal_default_instance() {
    return reinterpret_cast<const DataPoint*>(
               &_DataPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(DataPoint* other);
  friend void swap(DataPoint& a, DataPoint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DataPoint* New() const final {
    return CreateMaybeMessage<DataPoint>(NULL);
  }

  DataPoint* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DataPoint>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DataPoint& from);
  void MergeFrom(const DataPoint& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DataPoint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string latitude = 1;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 1;
  const ::std::string& latitude() const;
  void set_latitude(const ::std::string& value);
  #if LANG_CXX11
  void set_latitude(::std::string&& value);
  #endif
  void set_latitude(const char* value);
  void set_latitude(const char* value, size_t size);
  ::std::string* mutable_latitude();
  ::std::string* release_latitude();
  void set_allocated_latitude(::std::string* latitude);

  // string longitude = 2;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 2;
  const ::std::string& longitude() const;
  void set_longitude(const ::std::string& value);
  #if LANG_CXX11
  void set_longitude(::std::string&& value);
  #endif
  void set_longitude(const char* value);
  void set_longitude(const char* value, size_t size);
  ::std::string* mutable_longitude();
  ::std::string* release_longitude();
  void set_allocated_longitude(::std::string* longitude);

  // float altitude = 3;
  void clear_altitude();
  static const int kAltitudeFieldNumber = 3;
  float altitude() const;
  void set_altitude(float value);

  // float speed = 4;
  void clear_speed();
  static const int kSpeedFieldNumber = 4;
  float speed() const;
  void set_speed(float value);

  // int32 action = 5;
  void clear_action();
  static const int kActionFieldNumber = 5;
  ::google::protobuf::int32 action() const;
  void set_action(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DataPoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr latitude_;
  ::google::protobuf::internal::ArenaStringPtr longitude_;
  float altitude_;
  float speed_;
  ::google::protobuf::int32 action_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ProtoData_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MissionData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MissionData) */ {
 public:
  MissionData();
  virtual ~MissionData();

  MissionData(const MissionData& from);

  inline MissionData& operator=(const MissionData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MissionData(MissionData&& from) noexcept
    : MissionData() {
    *this = ::std::move(from);
  }

  inline MissionData& operator=(MissionData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MissionData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MissionData* internal_default_instance() {
    return reinterpret_cast<const MissionData*>(
               &_MissionData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(MissionData* other);
  friend void swap(MissionData& a, MissionData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MissionData* New() const final {
    return CreateMaybeMessage<MissionData>(NULL);
  }

  MissionData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MissionData>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MissionData& from);
  void MergeFrom(const MissionData& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MissionData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .DataPoint point = 1;
  int point_size() const;
  void clear_point();
  static const int kPointFieldNumber = 1;
  ::DataPoint* mutable_point(int index);
  ::google::protobuf::RepeatedPtrField< ::DataPoint >*
      mutable_point();
  const ::DataPoint& point(int index) const;
  ::DataPoint* add_point();
  const ::google::protobuf::RepeatedPtrField< ::DataPoint >&
      point() const;

  // @@protoc_insertion_point(class_scope:MissionData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::DataPoint > point_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ProtoData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Command

// int32 code = 1;
inline void Command::clear_code() {
  code_ = 0;
}
inline ::google::protobuf::int32 Command::code() const {
  // @@protoc_insertion_point(field_get:Command.code)
  return code_;
}
inline void Command::set_code(::google::protobuf::int32 value) {
  
  code_ = value;
  // @@protoc_insertion_point(field_set:Command.code)
}

// bytes payload = 2;
inline void Command::clear_payload() {
  payload_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Command::payload() const {
  // @@protoc_insertion_point(field_get:Command.payload)
  return payload_.GetNoArena();
}
inline void Command::set_payload(const ::std::string& value) {
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Command.payload)
}
#if LANG_CXX11
inline void Command::set_payload(::std::string&& value) {
  
  payload_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Command.payload)
}
#endif
inline void Command::set_payload(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Command.payload)
}
inline void Command::set_payload(const void* value, size_t size) {
  
  payload_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Command.payload)
}
inline ::std::string* Command::mutable_payload() {
  
  // @@protoc_insertion_point(field_mutable:Command.payload)
  return payload_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Command::release_payload() {
  // @@protoc_insertion_point(field_release:Command.payload)
  
  return payload_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Command::set_allocated_payload(::std::string* payload) {
  if (payload != NULL) {
    
  } else {
    
  }
  payload_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), payload);
  // @@protoc_insertion_point(field_set_allocated:Command.payload)
}

// -------------------------------------------------------------------

// DroneData

// float altitude = 1;
inline void DroneData::clear_altitude() {
  altitude_ = 0;
}
inline float DroneData::altitude() const {
  // @@protoc_insertion_point(field_get:DroneData.altitude)
  return altitude_;
}
inline void DroneData::set_altitude(float value) {
  
  altitude_ = value;
  // @@protoc_insertion_point(field_set:DroneData.altitude)
}

// double latitude = 2;
inline void DroneData::clear_latitude() {
  latitude_ = 0;
}
inline double DroneData::latitude() const {
  // @@protoc_insertion_point(field_get:DroneData.latitude)
  return latitude_;
}
inline void DroneData::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:DroneData.latitude)
}

// double longitude = 3;
inline void DroneData::clear_longitude() {
  longitude_ = 0;
}
inline double DroneData::longitude() const {
  // @@protoc_insertion_point(field_get:DroneData.longitude)
  return longitude_;
}
inline void DroneData::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:DroneData.longitude)
}

// float voltage = 4;
inline void DroneData::clear_voltage() {
  voltage_ = 0;
}
inline float DroneData::voltage() const {
  // @@protoc_insertion_point(field_get:DroneData.voltage)
  return voltage_;
}
inline void DroneData::set_voltage(float value) {
  
  voltage_ = value;
  // @@protoc_insertion_point(field_set:DroneData.voltage)
}

// float speed = 5;
inline void DroneData::clear_speed() {
  speed_ = 0;
}
inline float DroneData::speed() const {
  // @@protoc_insertion_point(field_get:DroneData.speed)
  return speed_;
}
inline void DroneData::set_speed(float value) {
  
  speed_ = value;
  // @@protoc_insertion_point(field_set:DroneData.speed)
}

// string state = 6;
inline void DroneData::clear_state() {
  state_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DroneData::state() const {
  // @@protoc_insertion_point(field_get:DroneData.state)
  return state_.GetNoArena();
}
inline void DroneData::set_state(const ::std::string& value) {
  
  state_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DroneData.state)
}
#if LANG_CXX11
inline void DroneData::set_state(::std::string&& value) {
  
  state_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DroneData.state)
}
#endif
inline void DroneData::set_state(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  state_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DroneData.state)
}
inline void DroneData::set_state(const char* value, size_t size) {
  
  state_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DroneData.state)
}
inline ::std::string* DroneData::mutable_state() {
  
  // @@protoc_insertion_point(field_mutable:DroneData.state)
  return state_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DroneData::release_state() {
  // @@protoc_insertion_point(field_release:DroneData.state)
  
  return state_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DroneData::set_allocated_state(::std::string* state) {
  if (state != NULL) {
    
  } else {
    
  }
  state_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), state);
  // @@protoc_insertion_point(field_set_allocated:DroneData.state)
}

// int32 video_port = 7;
inline void DroneData::clear_video_port() {
  video_port_ = 0;
}
inline ::google::protobuf::int32 DroneData::video_port() const {
  // @@protoc_insertion_point(field_get:DroneData.video_port)
  return video_port_;
}
inline void DroneData::set_video_port(::google::protobuf::int32 value) {
  
  video_port_ = value;
  // @@protoc_insertion_point(field_set:DroneData.video_port)
}

// string drone_id = 8;
inline void DroneData::clear_drone_id() {
  drone_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DroneData::drone_id() const {
  // @@protoc_insertion_point(field_get:DroneData.drone_id)
  return drone_id_.GetNoArena();
}
inline void DroneData::set_drone_id(const ::std::string& value) {
  
  drone_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DroneData.drone_id)
}
#if LANG_CXX11
inline void DroneData::set_drone_id(::std::string&& value) {
  
  drone_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DroneData.drone_id)
}
#endif
inline void DroneData::set_drone_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  drone_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DroneData.drone_id)
}
inline void DroneData::set_drone_id(const char* value, size_t size) {
  
  drone_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DroneData.drone_id)
}
inline ::std::string* DroneData::mutable_drone_id() {
  
  // @@protoc_insertion_point(field_mutable:DroneData.drone_id)
  return drone_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DroneData::release_drone_id() {
  // @@protoc_insertion_point(field_release:DroneData.drone_id)
  
  return drone_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DroneData::set_allocated_drone_id(::std::string* drone_id) {
  if (drone_id != NULL) {
    
  } else {
    
  }
  drone_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), drone_id);
  // @@protoc_insertion_point(field_set_allocated:DroneData.drone_id)
}

// -------------------------------------------------------------------

// DataPoint

// string latitude = 1;
inline void DataPoint::clear_latitude() {
  latitude_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DataPoint::latitude() const {
  // @@protoc_insertion_point(field_get:DataPoint.latitude)
  return latitude_.GetNoArena();
}
inline void DataPoint::set_latitude(const ::std::string& value) {
  
  latitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DataPoint.latitude)
}
#if LANG_CXX11
inline void DataPoint::set_latitude(::std::string&& value) {
  
  latitude_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DataPoint.latitude)
}
#endif
inline void DataPoint::set_latitude(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  latitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DataPoint.latitude)
}
inline void DataPoint::set_latitude(const char* value, size_t size) {
  
  latitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DataPoint.latitude)
}
inline ::std::string* DataPoint::mutable_latitude() {
  
  // @@protoc_insertion_point(field_mutable:DataPoint.latitude)
  return latitude_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataPoint::release_latitude() {
  // @@protoc_insertion_point(field_release:DataPoint.latitude)
  
  return latitude_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataPoint::set_allocated_latitude(::std::string* latitude) {
  if (latitude != NULL) {
    
  } else {
    
  }
  latitude_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), latitude);
  // @@protoc_insertion_point(field_set_allocated:DataPoint.latitude)
}

// string longitude = 2;
inline void DataPoint::clear_longitude() {
  longitude_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DataPoint::longitude() const {
  // @@protoc_insertion_point(field_get:DataPoint.longitude)
  return longitude_.GetNoArena();
}
inline void DataPoint::set_longitude(const ::std::string& value) {
  
  longitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DataPoint.longitude)
}
#if LANG_CXX11
inline void DataPoint::set_longitude(::std::string&& value) {
  
  longitude_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DataPoint.longitude)
}
#endif
inline void DataPoint::set_longitude(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  longitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DataPoint.longitude)
}
inline void DataPoint::set_longitude(const char* value, size_t size) {
  
  longitude_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DataPoint.longitude)
}
inline ::std::string* DataPoint::mutable_longitude() {
  
  // @@protoc_insertion_point(field_mutable:DataPoint.longitude)
  return longitude_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DataPoint::release_longitude() {
  // @@protoc_insertion_point(field_release:DataPoint.longitude)
  
  return longitude_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DataPoint::set_allocated_longitude(::std::string* longitude) {
  if (longitude != NULL) {
    
  } else {
    
  }
  longitude_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), longitude);
  // @@protoc_insertion_point(field_set_allocated:DataPoint.longitude)
}

// float altitude = 3;
inline void DataPoint::clear_altitude() {
  altitude_ = 0;
}
inline float DataPoint::altitude() const {
  // @@protoc_insertion_point(field_get:DataPoint.altitude)
  return altitude_;
}
inline void DataPoint::set_altitude(float value) {
  
  altitude_ = value;
  // @@protoc_insertion_point(field_set:DataPoint.altitude)
}

// float speed = 4;
inline void DataPoint::clear_speed() {
  speed_ = 0;
}
inline float DataPoint::speed() const {
  // @@protoc_insertion_point(field_get:DataPoint.speed)
  return speed_;
}
inline void DataPoint::set_speed(float value) {
  
  speed_ = value;
  // @@protoc_insertion_point(field_set:DataPoint.speed)
}

// int32 action = 5;
inline void DataPoint::clear_action() {
  action_ = 0;
}
inline ::google::protobuf::int32 DataPoint::action() const {
  // @@protoc_insertion_point(field_get:DataPoint.action)
  return action_;
}
inline void DataPoint::set_action(::google::protobuf::int32 value) {
  
  action_ = value;
  // @@protoc_insertion_point(field_set:DataPoint.action)
}

// -------------------------------------------------------------------

// MissionData

// repeated .DataPoint point = 1;
inline int MissionData::point_size() const {
  return point_.size();
}
inline void MissionData::clear_point() {
  point_.Clear();
}
inline ::DataPoint* MissionData::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:MissionData.point)
  return point_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::DataPoint >*
MissionData::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:MissionData.point)
  return &point_;
}
inline const ::DataPoint& MissionData::point(int index) const {
  // @@protoc_insertion_point(field_get:MissionData.point)
  return point_.Get(index);
}
inline ::DataPoint* MissionData::add_point() {
  // @@protoc_insertion_point(field_add:MissionData.point)
  return point_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DataPoint >&
MissionData::point() const {
  // @@protoc_insertion_point(field_list:MissionData.point)
  return point_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ProtoData_2eproto