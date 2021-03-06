// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: internal_tag.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "internal_tag.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace jim {
namespace ds {
namespace storage {
namespace pb {
class InternalTagDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<InternalTag>
     _instance;
} _InternalTag_default_instance_;

namespace protobuf_internal_5ftag_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTag, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InternalTag, txn_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(InternalTag)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_InternalTag_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "internal_tag.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _InternalTag_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_InternalTag_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022internal_tag.proto\022\021jim.ds.storage.pb\""
      "\035\n\013InternalTag\022\016\n\006txn_id\030\001 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 78);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "internal_tag.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_internal_5ftag_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InternalTag::kTxnIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InternalTag::InternalTag()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_internal_5ftag_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jim.ds.storage.pb.InternalTag)
}
InternalTag::InternalTag(const InternalTag& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  txn_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.txn_id().size() > 0) {
    txn_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txn_id_);
  }
  // @@protoc_insertion_point(copy_constructor:jim.ds.storage.pb.InternalTag)
}

void InternalTag::SharedCtor() {
  txn_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

InternalTag::~InternalTag() {
  // @@protoc_insertion_point(destructor:jim.ds.storage.pb.InternalTag)
  SharedDtor();
}

void InternalTag::SharedDtor() {
  txn_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void InternalTag::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InternalTag::descriptor() {
  protobuf_internal_5ftag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_internal_5ftag_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const InternalTag& InternalTag::default_instance() {
  protobuf_internal_5ftag_2eproto::InitDefaults();
  return *internal_default_instance();
}

InternalTag* InternalTag::New(::google::protobuf::Arena* arena) const {
  InternalTag* n = new InternalTag;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InternalTag::Clear() {
// @@protoc_insertion_point(message_clear_start:jim.ds.storage.pb.InternalTag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  txn_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool InternalTag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jim.ds.storage.pb.InternalTag)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string txn_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_txn_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->txn_id().data(), static_cast<int>(this->txn_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "jim.ds.storage.pb.InternalTag.txn_id"));
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
  // @@protoc_insertion_point(parse_success:jim.ds.storage.pb.InternalTag)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jim.ds.storage.pb.InternalTag)
  return false;
#undef DO_
}

void InternalTag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jim.ds.storage.pb.InternalTag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string txn_id = 1;
  if (this->txn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->txn_id().data(), static_cast<int>(this->txn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "jim.ds.storage.pb.InternalTag.txn_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->txn_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:jim.ds.storage.pb.InternalTag)
}

::google::protobuf::uint8* InternalTag::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:jim.ds.storage.pb.InternalTag)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string txn_id = 1;
  if (this->txn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->txn_id().data(), static_cast<int>(this->txn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "jim.ds.storage.pb.InternalTag.txn_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->txn_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jim.ds.storage.pb.InternalTag)
  return target;
}

size_t InternalTag::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jim.ds.storage.pb.InternalTag)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string txn_id = 1;
  if (this->txn_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->txn_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InternalTag::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jim.ds.storage.pb.InternalTag)
  GOOGLE_DCHECK_NE(&from, this);
  const InternalTag* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const InternalTag>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jim.ds.storage.pb.InternalTag)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jim.ds.storage.pb.InternalTag)
    MergeFrom(*source);
  }
}

void InternalTag::MergeFrom(const InternalTag& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jim.ds.storage.pb.InternalTag)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.txn_id().size() > 0) {

    txn_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.txn_id_);
  }
}

void InternalTag::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jim.ds.storage.pb.InternalTag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InternalTag::CopyFrom(const InternalTag& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jim.ds.storage.pb.InternalTag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InternalTag::IsInitialized() const {
  return true;
}

void InternalTag::Swap(InternalTag* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InternalTag::InternalSwap(InternalTag* other) {
  using std::swap;
  txn_id_.Swap(&other->txn_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InternalTag::GetMetadata() const {
  protobuf_internal_5ftag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_internal_5ftag_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InternalTag

// string txn_id = 1;
void InternalTag::clear_txn_id() {
  txn_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& InternalTag::txn_id() const {
  // @@protoc_insertion_point(field_get:jim.ds.storage.pb.InternalTag.txn_id)
  return txn_id_.GetNoArena();
}
void InternalTag::set_txn_id(const ::std::string& value) {
  
  txn_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jim.ds.storage.pb.InternalTag.txn_id)
}
#if LANG_CXX11
void InternalTag::set_txn_id(::std::string&& value) {
  
  txn_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jim.ds.storage.pb.InternalTag.txn_id)
}
#endif
void InternalTag::set_txn_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  txn_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jim.ds.storage.pb.InternalTag.txn_id)
}
void InternalTag::set_txn_id(const char* value, size_t size) {
  
  txn_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jim.ds.storage.pb.InternalTag.txn_id)
}
::std::string* InternalTag::mutable_txn_id() {
  
  // @@protoc_insertion_point(field_mutable:jim.ds.storage.pb.InternalTag.txn_id)
  return txn_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* InternalTag::release_txn_id() {
  // @@protoc_insertion_point(field_release:jim.ds.storage.pb.InternalTag.txn_id)
  
  return txn_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void InternalTag::set_allocated_txn_id(::std::string* txn_id) {
  if (txn_id != NULL) {
    
  } else {
    
  }
  txn_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), txn_id);
  // @@protoc_insertion_point(field_set_allocated:jim.ds.storage.pb.InternalTag.txn_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace storage
}  // namespace ds
}  // namespace jim

// @@protoc_insertion_point(global_scope)
