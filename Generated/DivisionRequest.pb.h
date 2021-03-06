// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DivisionRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DivisionRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DivisionRequest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DivisionRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DivisionRequest_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DivisionRequest_2eproto;
class DivisionRequest;
class DivisionRequestDefaultTypeInternal;
extern DivisionRequestDefaultTypeInternal _DivisionRequest_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::DivisionRequest* Arena::CreateMaybeMessage<::DivisionRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class DivisionRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DivisionRequest) */ {
 public:
  DivisionRequest();
  virtual ~DivisionRequest();

  DivisionRequest(const DivisionRequest& from);
  DivisionRequest(DivisionRequest&& from) noexcept
    : DivisionRequest() {
    *this = ::std::move(from);
  }

  inline DivisionRequest& operator=(const DivisionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline DivisionRequest& operator=(DivisionRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const DivisionRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DivisionRequest* internal_default_instance() {
    return reinterpret_cast<const DivisionRequest*>(
               &_DivisionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DivisionRequest& a, DivisionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(DivisionRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DivisionRequest* New() const final {
    return CreateMaybeMessage<DivisionRequest>(nullptr);
  }

  DivisionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DivisionRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DivisionRequest& from);
  void MergeFrom(const DivisionRequest& from);
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
  void InternalSwap(DivisionRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DivisionRequest";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_DivisionRequest_2eproto);
    return ::descriptor_table_DivisionRequest_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstOperandFieldNumber = 1,
    kSecondOperandFieldNumber = 2,
  };
  // int32 FirstOperand = 1;
  void clear_firstoperand();
  ::PROTOBUF_NAMESPACE_ID::int32 firstoperand() const;
  void set_firstoperand(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_firstoperand() const;
  void _internal_set_firstoperand(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 SecondOperand = 2;
  void clear_secondoperand();
  ::PROTOBUF_NAMESPACE_ID::int32 secondoperand() const;
  void set_secondoperand(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_secondoperand() const;
  void _internal_set_secondoperand(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:DivisionRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 firstoperand_;
  ::PROTOBUF_NAMESPACE_ID::int32 secondoperand_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DivisionRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DivisionRequest

// int32 FirstOperand = 1;
inline void DivisionRequest::clear_firstoperand() {
  firstoperand_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DivisionRequest::_internal_firstoperand() const {
  return firstoperand_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DivisionRequest::firstoperand() const {
  // @@protoc_insertion_point(field_get:DivisionRequest.FirstOperand)
  return _internal_firstoperand();
}
inline void DivisionRequest::_internal_set_firstoperand(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  firstoperand_ = value;
}
inline void DivisionRequest::set_firstoperand(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_firstoperand(value);
  // @@protoc_insertion_point(field_set:DivisionRequest.FirstOperand)
}

// int32 SecondOperand = 2;
inline void DivisionRequest::clear_secondoperand() {
  secondoperand_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DivisionRequest::_internal_secondoperand() const {
  return secondoperand_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DivisionRequest::secondoperand() const {
  // @@protoc_insertion_point(field_get:DivisionRequest.SecondOperand)
  return _internal_secondoperand();
}
inline void DivisionRequest::_internal_set_secondoperand(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  secondoperand_ = value;
}
inline void DivisionRequest::set_secondoperand(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_secondoperand(value);
  // @@protoc_insertion_point(field_set:DivisionRequest.SecondOperand)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DivisionRequest_2eproto
