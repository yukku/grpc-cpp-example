// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route_guide.proto

#ifndef PROTOBUF_INCLUDED_route_5fguide_2eproto
#define PROTOBUF_INCLUDED_route_5fguide_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_route_5fguide_2eproto 

namespace protobuf_route_5fguide_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_route_5fguide_2eproto
namespace routeguide {
class File;
class FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
class Number;
class NumberDefaultTypeInternal;
extern NumberDefaultTypeInternal _Number_default_instance_;
class String;
class StringDefaultTypeInternal;
extern StringDefaultTypeInternal _String_default_instance_;
}  // namespace routeguide
namespace google {
namespace protobuf {
template<> ::routeguide::File* Arena::CreateMaybeMessage<::routeguide::File>(Arena*);
template<> ::routeguide::Number* Arena::CreateMaybeMessage<::routeguide::Number>(Arena*);
template<> ::routeguide::String* Arena::CreateMaybeMessage<::routeguide::String>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace routeguide {

// ===================================================================

class Number : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.Number) */ {
 public:
  Number();
  virtual ~Number();

  Number(const Number& from);

  inline Number& operator=(const Number& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Number(Number&& from) noexcept
    : Number() {
    *this = ::std::move(from);
  }

  inline Number& operator=(Number&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Number& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Number* internal_default_instance() {
    return reinterpret_cast<const Number*>(
               &_Number_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Number* other);
  friend void swap(Number& a, Number& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Number* New() const final {
    return CreateMaybeMessage<Number>(NULL);
  }

  Number* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Number>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Number& from);
  void MergeFrom(const Number& from);
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
  void InternalSwap(Number* other);
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

  // int32 number = 1;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  ::google::protobuf::int32 number() const;
  void set_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:routeguide.Number)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 number_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class String : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.String) */ {
 public:
  String();
  virtual ~String();

  String(const String& from);

  inline String& operator=(const String& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  String(String&& from) noexcept
    : String() {
    *this = ::std::move(from);
  }

  inline String& operator=(String&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const String& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const String* internal_default_instance() {
    return reinterpret_cast<const String*>(
               &_String_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(String* other);
  friend void swap(String& a, String& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline String* New() const final {
    return CreateMaybeMessage<String>(NULL);
  }

  String* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<String>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const String& from);
  void MergeFrom(const String& from);
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
  void InternalSwap(String* other);
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

  // string string = 1;
  void clear_string();
  static const int kStringFieldNumber = 1;
  const ::std::string& string() const;
  void set_string(const ::std::string& value);
  #if LANG_CXX11
  void set_string(::std::string&& value);
  #endif
  void set_string(const char* value);
  void set_string(const char* value, size_t size);
  ::std::string* mutable_string();
  ::std::string* release_string();
  void set_allocated_string(::std::string* string);

  // @@protoc_insertion_point(class_scope:routeguide.String)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr string_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_route_5fguide_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class File : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:routeguide.File) */ {
 public:
  File();
  virtual ~File();

  File(const File& from);

  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  File(File&& from) noexcept
    : File() {
    *this = ::std::move(from);
  }

  inline File& operator=(File&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const File& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const File* internal_default_instance() {
    return reinterpret_cast<const File*>(
               &_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(File* other);
  friend void swap(File& a, File& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline File* New() const final {
    return CreateMaybeMessage<File>(NULL);
  }

  File* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<File>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const File& from);
  void MergeFrom(const File& from);
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
  void InternalSwap(File* other);
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

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // int64 offset = 1;
  void clear_offset();
  static const int kOffsetFieldNumber = 1;
  ::google::protobuf::int64 offset() const;
  void set_offset(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:routeguide.File)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::int64 offset_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_route_5fguide_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Number

// int32 number = 1;
inline void Number::clear_number() {
  number_ = 0;
}
inline ::google::protobuf::int32 Number::number() const {
  // @@protoc_insertion_point(field_get:routeguide.Number.number)
  return number_;
}
inline void Number::set_number(::google::protobuf::int32 value) {
  
  number_ = value;
  // @@protoc_insertion_point(field_set:routeguide.Number.number)
}

// -------------------------------------------------------------------

// String

// string string = 1;
inline void String::clear_string() {
  string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& String::string() const {
  // @@protoc_insertion_point(field_get:routeguide.String.string)
  return string_.GetNoArena();
}
inline void String::set_string(const ::std::string& value) {
  
  string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:routeguide.String.string)
}
#if LANG_CXX11
inline void String::set_string(::std::string&& value) {
  
  string_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:routeguide.String.string)
}
#endif
inline void String::set_string(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:routeguide.String.string)
}
inline void String::set_string(const char* value, size_t size) {
  
  string_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:routeguide.String.string)
}
inline ::std::string* String::mutable_string() {
  
  // @@protoc_insertion_point(field_mutable:routeguide.String.string)
  return string_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* String::release_string() {
  // @@protoc_insertion_point(field_release:routeguide.String.string)
  
  return string_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void String::set_allocated_string(::std::string* string) {
  if (string != NULL) {
    
  } else {
    
  }
  string_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string);
  // @@protoc_insertion_point(field_set_allocated:routeguide.String.string)
}

// -------------------------------------------------------------------

// File

// int64 offset = 1;
inline void File::clear_offset() {
  offset_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 File::offset() const {
  // @@protoc_insertion_point(field_get:routeguide.File.offset)
  return offset_;
}
inline void File::set_offset(::google::protobuf::int64 value) {
  
  offset_ = value;
  // @@protoc_insertion_point(field_set:routeguide.File.offset)
}

// bytes data = 2;
inline void File::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& File::data() const {
  // @@protoc_insertion_point(field_get:routeguide.File.data)
  return data_.GetNoArena();
}
inline void File::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:routeguide.File.data)
}
#if LANG_CXX11
inline void File::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:routeguide.File.data)
}
#endif
inline void File::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:routeguide.File.data)
}
inline void File::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:routeguide.File.data)
}
inline ::std::string* File::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:routeguide.File.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* File::release_data() {
  // @@protoc_insertion_point(field_release:routeguide.File.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void File::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:routeguide.File.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace routeguide

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_route_5fguide_2eproto
