// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: route_guide.proto

#include "route_guide.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace routeguide {
class NumberDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Number>
      _instance;
} _Number_default_instance_;
class StringDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<String>
      _instance;
} _String_default_instance_;
class FileDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<File>
      _instance;
} _File_default_instance_;
}  // namespace routeguide
namespace protobuf_route_5fguide_2eproto {
static void InitDefaultsNumber() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::routeguide::_Number_default_instance_;
    new (ptr) ::routeguide::Number();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::routeguide::Number::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Number =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsNumber}, {}};

static void InitDefaultsString() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::routeguide::_String_default_instance_;
    new (ptr) ::routeguide::String();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::routeguide::String::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_String =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsString}, {}};

static void InitDefaultsFile() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::routeguide::_File_default_instance_;
    new (ptr) ::routeguide::File();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::routeguide::File::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_File =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsFile}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Number.base);
  ::google::protobuf::internal::InitSCC(&scc_info_String.base);
  ::google::protobuf::internal::InitSCC(&scc_info_File.base);
}

::google::protobuf::Metadata file_level_metadata[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::Number, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::Number, number_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::String, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::String, string_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::File, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::File, offset_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::routeguide::File, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::routeguide::Number)},
  { 6, -1, sizeof(::routeguide::String)},
  { 12, -1, sizeof(::routeguide::File)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::routeguide::_Number_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::routeguide::_String_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::routeguide::_File_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "route_guide.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021route_guide.proto\022\nrouteguide\"\030\n\006Numbe"
      "r\022\016\n\006number\030\001 \001(\005\"\030\n\006String\022\016\n\006string\030\001 "
      "\001(\t\"$\n\004File\022\016\n\006offset\030\001 \001(\003\022\014\n\004data\030\002 \001("
      "\0142\253\001\n\nRouteGuide\0225\n\tGetNumber\022\022.routegui"
      "de.Number\032\022.routeguide.Number\"\000\0225\n\tGetSt"
      "ring\022\022.routeguide.String\032\022.routeguide.St"
      "ring\"\000\022/\n\007GetFile\022\020.routeguide.File\032\020.ro"
      "uteguide.File\"\000b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 303);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "route_guide.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_route_5fguide_2eproto
namespace routeguide {

// ===================================================================

void Number::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Number::kNumberFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Number::Number()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_route_5fguide_2eproto::scc_info_Number.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:routeguide.Number)
}
Number::Number(const Number& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  number_ = from.number_;
  // @@protoc_insertion_point(copy_constructor:routeguide.Number)
}

void Number::SharedCtor() {
  number_ = 0;
}

Number::~Number() {
  // @@protoc_insertion_point(destructor:routeguide.Number)
  SharedDtor();
}

void Number::SharedDtor() {
}

void Number::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Number::descriptor() {
  ::protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Number& Number::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_route_5fguide_2eproto::scc_info_Number.base);
  return *internal_default_instance();
}


void Number::Clear() {
// @@protoc_insertion_point(message_clear_start:routeguide.Number)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  number_ = 0;
  _internal_metadata_.Clear();
}

bool Number::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:routeguide.Number)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &number_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:routeguide.Number)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:routeguide.Number)
  return false;
#undef DO_
}

void Number::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:routeguide.Number)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 number = 1;
  if (this->number() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->number(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:routeguide.Number)
}

::google::protobuf::uint8* Number::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:routeguide.Number)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 number = 1;
  if (this->number() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->number(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:routeguide.Number)
  return target;
}

size_t Number::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:routeguide.Number)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 number = 1;
  if (this->number() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->number());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Number::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:routeguide.Number)
  GOOGLE_DCHECK_NE(&from, this);
  const Number* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Number>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:routeguide.Number)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:routeguide.Number)
    MergeFrom(*source);
  }
}

void Number::MergeFrom(const Number& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:routeguide.Number)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.number() != 0) {
    set_number(from.number());
  }
}

void Number::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:routeguide.Number)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Number::CopyFrom(const Number& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:routeguide.Number)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Number::IsInitialized() const {
  return true;
}

void Number::Swap(Number* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Number::InternalSwap(Number* other) {
  using std::swap;
  swap(number_, other->number_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Number::GetMetadata() const {
  protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void String::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int String::kStringFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

String::String()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_route_5fguide_2eproto::scc_info_String.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:routeguide.String)
}
String::String(const String& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.string().size() > 0) {
    string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_);
  }
  // @@protoc_insertion_point(copy_constructor:routeguide.String)
}

void String::SharedCtor() {
  string_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

String::~String() {
  // @@protoc_insertion_point(destructor:routeguide.String)
  SharedDtor();
}

void String::SharedDtor() {
  string_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void String::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* String::descriptor() {
  ::protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const String& String::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_route_5fguide_2eproto::scc_info_String.base);
  return *internal_default_instance();
}


void String::Clear() {
// @@protoc_insertion_point(message_clear_start:routeguide.String)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  string_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool String::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:routeguide.String)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string string = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_string()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->string().data(), static_cast<int>(this->string().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "routeguide.String.string"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:routeguide.String)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:routeguide.String)
  return false;
#undef DO_
}

void String::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:routeguide.String)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string string = 1;
  if (this->string().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string().data(), static_cast<int>(this->string().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "routeguide.String.string");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->string(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:routeguide.String)
}

::google::protobuf::uint8* String::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:routeguide.String)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string string = 1;
  if (this->string().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->string().data(), static_cast<int>(this->string().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "routeguide.String.string");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->string(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:routeguide.String)
  return target;
}

size_t String::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:routeguide.String)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string string = 1;
  if (this->string().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->string());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void String::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:routeguide.String)
  GOOGLE_DCHECK_NE(&from, this);
  const String* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const String>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:routeguide.String)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:routeguide.String)
    MergeFrom(*source);
  }
}

void String::MergeFrom(const String& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:routeguide.String)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.string().size() > 0) {

    string_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_);
  }
}

void String::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:routeguide.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void String::CopyFrom(const String& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:routeguide.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool String::IsInitialized() const {
  return true;
}

void String::Swap(String* other) {
  if (other == this) return;
  InternalSwap(other);
}
void String::InternalSwap(String* other) {
  using std::swap;
  string_.Swap(&other->string_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata String::GetMetadata() const {
  protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void File::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int File::kOffsetFieldNumber;
const int File::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

File::File()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_route_5fguide_2eproto::scc_info_File.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:routeguide.File)
}
File::File(const File& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  offset_ = from.offset_;
  // @@protoc_insertion_point(copy_constructor:routeguide.File)
}

void File::SharedCtor() {
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = GOOGLE_LONGLONG(0);
}

File::~File() {
  // @@protoc_insertion_point(destructor:routeguide.File)
  SharedDtor();
}

void File::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void File::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* File::descriptor() {
  ::protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const File& File::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_route_5fguide_2eproto::scc_info_File.base);
  return *internal_default_instance();
}


void File::Clear() {
// @@protoc_insertion_point(message_clear_start:routeguide.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = GOOGLE_LONGLONG(0);
  _internal_metadata_.Clear();
}

bool File::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:routeguide.File)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 offset = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:routeguide.File)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:routeguide.File)
  return false;
#undef DO_
}

void File::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:routeguide.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 offset = 1;
  if (this->offset() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->offset(), output);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:routeguide.File)
}

::google::protobuf::uint8* File::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:routeguide.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 offset = 1;
  if (this->offset() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->offset(), target);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:routeguide.File)
  return target;
}

size_t File::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:routeguide.File)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  // int64 offset = 1;
  if (this->offset() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->offset());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void File::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:routeguide.File)
  GOOGLE_DCHECK_NE(&from, this);
  const File* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const File>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:routeguide.File)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:routeguide.File)
    MergeFrom(*source);
  }
}

void File::MergeFrom(const File& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:routeguide.File)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  if (from.offset() != 0) {
    set_offset(from.offset());
  }
}

void File::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:routeguide.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void File::CopyFrom(const File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:routeguide.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool File::IsInitialized() const {
  return true;
}

void File::Swap(File* other) {
  if (other == this) return;
  InternalSwap(other);
}
void File::InternalSwap(File* other) {
  using std::swap;
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(offset_, other->offset_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata File::GetMetadata() const {
  protobuf_route_5fguide_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_route_5fguide_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace routeguide
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::routeguide::Number* Arena::CreateMaybeMessage< ::routeguide::Number >(Arena* arena) {
  return Arena::CreateInternal< ::routeguide::Number >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::routeguide::String* Arena::CreateMaybeMessage< ::routeguide::String >(Arena* arena) {
  return Arena::CreateInternal< ::routeguide::String >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::routeguide::File* Arena::CreateMaybeMessage< ::routeguide::File >(Arena* arena) {
  return Arena::CreateInternal< ::routeguide::File >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
