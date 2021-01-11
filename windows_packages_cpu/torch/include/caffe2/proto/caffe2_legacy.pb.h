// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: caffe2/proto/caffe2_legacy.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_caffe2_2fproto_2fcaffe2_5flegacy_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_caffe2_2fproto_2fcaffe2_5flegacy_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_caffe2_2fproto_2fcaffe2_5flegacy_2eproto CAFFE2_API
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct CAFFE2_API TableStruct_caffe2_2fproto_2fcaffe2_5flegacy_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern CAFFE2_API const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_caffe2_2fproto_2fcaffe2_5flegacy_2eproto;
namespace caffe2 { const ::std::string& GetEmptyStringAlreadyInited(); 
class CaffeDatum;
class CaffeDatumDefaultTypeInternal;
CAFFE2_API extern CaffeDatumDefaultTypeInternal _CaffeDatum_default_instance_;
}  // namespace caffe2
PROTOBUF_NAMESPACE_OPEN
template<> CAFFE2_API ::caffe2::CaffeDatum* Arena::CreateMaybeMessage<::caffe2::CaffeDatum>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace caffe2 {

enum LegacyPadding : int {
  NOTSET = 0,
  VALID = 1,
  SAME = 2,
  CAFFE_LEGACY_POOLING = 3
};
CAFFE2_API bool LegacyPadding_IsValid(int value);
constexpr LegacyPadding LegacyPadding_MIN = NOTSET;
constexpr LegacyPadding LegacyPadding_MAX = CAFFE_LEGACY_POOLING;
constexpr int LegacyPadding_ARRAYSIZE = LegacyPadding_MAX + 1;

CAFFE2_API const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LegacyPadding_descriptor();
template<typename T>
inline const std::string& LegacyPadding_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LegacyPadding>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LegacyPadding_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LegacyPadding_descriptor(), enum_t_value);
}
inline bool LegacyPadding_Parse(
    const std::string& name, LegacyPadding* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LegacyPadding>(
    LegacyPadding_descriptor(), name, value);
}
// ===================================================================

class CAFFE2_API CaffeDatum :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:caffe2.CaffeDatum) */ {
 public:
  CaffeDatum();
  virtual ~CaffeDatum();

  CaffeDatum(const CaffeDatum& from);
  CaffeDatum(CaffeDatum&& from) noexcept
    : CaffeDatum() {
    *this = ::std::move(from);
  }

  inline CaffeDatum& operator=(const CaffeDatum& from) {
    CopyFrom(from);
    return *this;
  }
  inline CaffeDatum& operator=(CaffeDatum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CaffeDatum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CaffeDatum* internal_default_instance() {
    return reinterpret_cast<const CaffeDatum*>(
               &_CaffeDatum_default_instance_);
  }
  static int const kIndexInFileMessages =
    0;

  friend void swap(CaffeDatum& a, CaffeDatum& b) {
    a.Swap(&b);
  }
  inline void Swap(CaffeDatum* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CaffeDatum* New() const final {
    return CreateMaybeMessage<CaffeDatum>(nullptr);
  }

  CaffeDatum* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CaffeDatum>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CaffeDatum& from);
  void MergeFrom(const CaffeDatum& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CaffeDatum* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "caffe2.CaffeDatum";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_caffe2_2fproto_2fcaffe2_5flegacy_2eproto);
    return ::descriptor_table_caffe2_2fproto_2fcaffe2_5flegacy_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFloatDataFieldNumber = 6,
    kDataFieldNumber = 4,
    kChannelsFieldNumber = 1,
    kHeightFieldNumber = 2,
    kWidthFieldNumber = 3,
    kLabelFieldNumber = 5,
    kEncodedFieldNumber = 7,
  };
  // repeated float float_data = 6;
  int float_data_size() const;
  private:
  int _internal_float_data_size() const;
  public:
  void clear_float_data();
  private:
  float _internal_float_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_float_data() const;
  void _internal_add_float_data(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_float_data();
  public:
  float float_data(int index) const;
  void set_float_data(int index, float value);
  void add_float_data(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      float_data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_float_data();

  // optional bytes data = 4;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // optional int32 channels = 1;
  bool has_channels() const;
  private:
  bool _internal_has_channels() const;
  public:
  void clear_channels();
  ::PROTOBUF_NAMESPACE_ID::int32 channels() const;
  void set_channels(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_channels() const;
  void _internal_set_channels(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 height = 2;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 width = 3;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 label = 5;
  bool has_label() const;
  private:
  bool _internal_has_label() const;
  public:
  void clear_label();
  ::PROTOBUF_NAMESPACE_ID::int32 label() const;
  void set_label(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_label() const;
  void _internal_set_label(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool encoded = 7 [default = false];
  bool has_encoded() const;
  private:
  bool _internal_has_encoded() const;
  public:
  void clear_encoded();
  bool encoded() const;
  void set_encoded(bool value);
  private:
  bool _internal_encoded() const;
  void _internal_set_encoded(bool value);
  public:

  // @@protoc_insertion_point(class_scope:caffe2.CaffeDatum)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > float_data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::int32 channels_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 label_;
  bool encoded_;
  friend struct ::TableStruct_caffe2_2fproto_2fcaffe2_5flegacy_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CaffeDatum

// optional int32 channels = 1;
inline bool CaffeDatum::_internal_has_channels() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CaffeDatum::has_channels() const {
  return _internal_has_channels();
}
inline void CaffeDatum::clear_channels() {
  channels_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::_internal_channels() const {
  return channels_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::channels() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.channels)
  return _internal_channels();
}
inline void CaffeDatum::_internal_set_channels(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  channels_ = value;
}
inline void CaffeDatum::set_channels(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_channels(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.channels)
}

// optional int32 height = 2;
inline bool CaffeDatum::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CaffeDatum::has_height() const {
  return _internal_has_height();
}
inline void CaffeDatum::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::height() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.height)
  return _internal_height();
}
inline void CaffeDatum::_internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  height_ = value;
}
inline void CaffeDatum::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.height)
}

// optional int32 width = 3;
inline bool CaffeDatum::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CaffeDatum::has_width() const {
  return _internal_has_width();
}
inline void CaffeDatum::clear_width() {
  width_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::width() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.width)
  return _internal_width();
}
inline void CaffeDatum::_internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  width_ = value;
}
inline void CaffeDatum::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.width)
}

// optional bytes data = 4;
inline bool CaffeDatum::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CaffeDatum::has_data() const {
  return _internal_has_data();
}
inline void CaffeDatum::clear_data() {
  data_.ClearToEmptyNoArena(&GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CaffeDatum::data() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.data)
  return _internal_data();
}
inline void CaffeDatum::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.data)
}
inline std::string* CaffeDatum::mutable_data() {
  // @@protoc_insertion_point(field_mutable:caffe2.CaffeDatum.data)
  return _internal_mutable_data();
}
inline const std::string& CaffeDatum::_internal_data() const {
  return data_.GetNoArena();
}
inline void CaffeDatum::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&GetEmptyStringAlreadyInited(), value);
}
inline void CaffeDatum::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(
    &GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:caffe2.CaffeDatum.data)
}
inline void CaffeDatum::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:caffe2.CaffeDatum.data)
}
inline void CaffeDatum::set_data(const void* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  data_.SetNoArena(&GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:caffe2.CaffeDatum.data)
}
inline std::string* CaffeDatum::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.MutableNoArena(&GetEmptyStringAlreadyInited());
}
inline std::string* CaffeDatum::release_data() {
  // @@protoc_insertion_point(field_release:caffe2.CaffeDatum.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefaultNoArena(&GetEmptyStringAlreadyInited());
}
inline void CaffeDatum::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocatedNoArena(&GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:caffe2.CaffeDatum.data)
}

// optional int32 label = 5;
inline bool CaffeDatum::_internal_has_label() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CaffeDatum::has_label() const {
  return _internal_has_label();
}
inline void CaffeDatum::clear_label() {
  label_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::_internal_label() const {
  return label_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CaffeDatum::label() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.label)
  return _internal_label();
}
inline void CaffeDatum::_internal_set_label(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  label_ = value;
}
inline void CaffeDatum::set_label(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_label(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.label)
}

// repeated float float_data = 6;
inline int CaffeDatum::_internal_float_data_size() const {
  return float_data_.size();
}
inline int CaffeDatum::float_data_size() const {
  return _internal_float_data_size();
}
inline void CaffeDatum::clear_float_data() {
  float_data_.Clear();
}
inline float CaffeDatum::_internal_float_data(int index) const {
  return float_data_.Get(index);
}
inline float CaffeDatum::float_data(int index) const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.float_data)
  return _internal_float_data(index);
}
inline void CaffeDatum::set_float_data(int index, float value) {
  float_data_.Set(index, value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.float_data)
}
inline void CaffeDatum::_internal_add_float_data(float value) {
  float_data_.Add(value);
}
inline void CaffeDatum::add_float_data(float value) {
  _internal_add_float_data(value);
  // @@protoc_insertion_point(field_add:caffe2.CaffeDatum.float_data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
CaffeDatum::_internal_float_data() const {
  return float_data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
CaffeDatum::float_data() const {
  // @@protoc_insertion_point(field_list:caffe2.CaffeDatum.float_data)
  return _internal_float_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
CaffeDatum::_internal_mutable_float_data() {
  return &float_data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
CaffeDatum::mutable_float_data() {
  // @@protoc_insertion_point(field_mutable_list:caffe2.CaffeDatum.float_data)
  return _internal_mutable_float_data();
}

// optional bool encoded = 7 [default = false];
inline bool CaffeDatum::_internal_has_encoded() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CaffeDatum::has_encoded() const {
  return _internal_has_encoded();
}
inline void CaffeDatum::clear_encoded() {
  encoded_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool CaffeDatum::_internal_encoded() const {
  return encoded_;
}
inline bool CaffeDatum::encoded() const {
  // @@protoc_insertion_point(field_get:caffe2.CaffeDatum.encoded)
  return _internal_encoded();
}
inline void CaffeDatum::_internal_set_encoded(bool value) {
  _has_bits_[0] |= 0x00000020u;
  encoded_ = value;
}
inline void CaffeDatum::set_encoded(bool value) {
  _internal_set_encoded(value);
  // @@protoc_insertion_point(field_set:caffe2.CaffeDatum.encoded)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace caffe2

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::caffe2::LegacyPadding> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::caffe2::LegacyPadding>() {
  return ::caffe2::LegacyPadding_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_caffe2_2fproto_2fcaffe2_5flegacy_2eproto
