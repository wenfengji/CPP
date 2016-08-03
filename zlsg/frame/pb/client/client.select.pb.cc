// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.select.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client.select.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace client {

namespace {

const ::google::protobuf::Descriptor* select_name_role_id_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  select_name_role_id_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_client_2eselect_2eproto() {
  protobuf_AddDesc_client_2eselect_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "client.select.proto");
  GOOGLE_CHECK(file != NULL);
  select_name_role_id_descriptor_ = file->message_type(0);
  static const int select_name_role_id_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(select_name_role_id, role_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(select_name_role_id, role_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(select_name_role_id, svr_head_),
  };
  select_name_role_id_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      select_name_role_id_descriptor_,
      select_name_role_id::default_instance_,
      select_name_role_id_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(select_name_role_id, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(select_name_role_id, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(select_name_role_id));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_client_2eselect_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    select_name_role_id_descriptor_, &select_name_role_id::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_client_2eselect_2eproto() {
  delete select_name_role_id::default_instance_;
  delete select_name_role_id_reflection_;
}

void protobuf_AddDesc_client_2eselect_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::client::protobuf_AddDesc_client_2ecomm_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023client.select.proto\022\006client\032\021client.co"
    "mm.proto\"d\n\023select_name_role_id\022\021\n\trole_"
    "name\030\001 \002(\t\022\022\n\007role_id\030\002 \002(\r:\0010\022&\n\010svr_he"
    "ad\030\350\007 \001(\0132\023.client.server_head", 150);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "client.select.proto", &protobuf_RegisterTypes);
  select_name_role_id::default_instance_ = new select_name_role_id();
  select_name_role_id::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client_2eselect_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client_2eselect_2eproto {
  StaticDescriptorInitializer_client_2eselect_2eproto() {
    protobuf_AddDesc_client_2eselect_2eproto();
  }
} static_descriptor_initializer_client_2eselect_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int select_name_role_id::kRoleNameFieldNumber;
const int select_name_role_id::kRoleIdFieldNumber;
const int select_name_role_id::kSvrHeadFieldNumber;
#endif  // !_MSC_VER

select_name_role_id::select_name_role_id()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void select_name_role_id::InitAsDefaultInstance() {
  svr_head_ = const_cast< ::client::server_head*>(&::client::server_head::default_instance());
}

select_name_role_id::select_name_role_id(const select_name_role_id& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void select_name_role_id::SharedCtor() {
  _cached_size_ = 0;
  role_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  role_id_ = 0u;
  svr_head_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

select_name_role_id::~select_name_role_id() {
  SharedDtor();
}

void select_name_role_id::SharedDtor() {
  if (role_name_ != &::google::protobuf::internal::kEmptyString) {
    delete role_name_;
  }
  if (this != default_instance_) {
    delete svr_head_;
  }
}

void select_name_role_id::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* select_name_role_id::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return select_name_role_id_descriptor_;
}

const select_name_role_id& select_name_role_id::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2eselect_2eproto();
  return *default_instance_;
}

select_name_role_id* select_name_role_id::default_instance_ = NULL;

select_name_role_id* select_name_role_id::New() const {
  return new select_name_role_id;
}

void select_name_role_id::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_role_name()) {
      if (role_name_ != &::google::protobuf::internal::kEmptyString) {
        role_name_->clear();
      }
    }
    role_id_ = 0u;
    if (has_svr_head()) {
      if (svr_head_ != NULL) svr_head_->::client::server_head::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool select_name_role_id::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string role_name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_role_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->role_name().data(), this->role_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_role_id;
        break;
      }

      // required uint32 role_id = 2 [default = 0];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_role_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &role_id_)));
          set_has_role_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(8002)) goto parse_svr_head;
        break;
      }

      // optional .client.server_head svr_head = 1000;
      case 1000: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_svr_head:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_svr_head()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void select_name_role_id::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string role_name = 1;
  if (has_role_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->role_name().data(), this->role_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->role_name(), output);
  }

  // required uint32 role_id = 2 [default = 0];
  if (has_role_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->role_id(), output);
  }

  // optional .client.server_head svr_head = 1000;
  if (has_svr_head()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1000, this->svr_head(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* select_name_role_id::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string role_name = 1;
  if (has_role_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->role_name().data(), this->role_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->role_name(), target);
  }

  // required uint32 role_id = 2 [default = 0];
  if (has_role_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->role_id(), target);
  }

  // optional .client.server_head svr_head = 1000;
  if (has_svr_head()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1000, this->svr_head(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int select_name_role_id::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string role_name = 1;
    if (has_role_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->role_name());
    }

    // required uint32 role_id = 2 [default = 0];
    if (has_role_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->role_id());
    }

    // optional .client.server_head svr_head = 1000;
    if (has_svr_head()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->svr_head());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void select_name_role_id::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const select_name_role_id* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const select_name_role_id*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void select_name_role_id::MergeFrom(const select_name_role_id& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_role_name()) {
      set_role_name(from.role_name());
    }
    if (from.has_role_id()) {
      set_role_id(from.role_id());
    }
    if (from.has_svr_head()) {
      mutable_svr_head()->::client::server_head::MergeFrom(from.svr_head());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void select_name_role_id::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void select_name_role_id::CopyFrom(const select_name_role_id& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool select_name_role_id::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void select_name_role_id::Swap(select_name_role_id* other) {
  if (other != this) {
    std::swap(role_name_, other->role_name_);
    std::swap(role_id_, other->role_id_);
    std::swap(svr_head_, other->svr_head_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata select_name_role_id::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = select_name_role_id_descriptor_;
  metadata.reflection = select_name_role_id_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client

// @@protoc_insertion_point(global_scope)