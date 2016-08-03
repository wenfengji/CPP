// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.region.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "client.region.pb.h"

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

const ::google::protobuf::Descriptor* region_feature_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  region_feature_reflection_ = NULL;
const ::google::protobuf::Descriptor* region_info_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  region_info_reflection_ = NULL;
const ::google::protobuf::Descriptor* region_info_msg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  region_info_msg_reflection_ = NULL;
const ::google::protobuf::Descriptor* region_complete_msg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  region_complete_msg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_client_2eregion_2eproto() {
  protobuf_AddDesc_client_2eregion_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "client.region.proto");
  GOOGLE_CHECK(file != NULL);
  region_feature_descriptor_ = file->message_type(0);
  static const int region_feature_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_feature, exp_magnification_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_feature, atk_magnification_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_feature, def_magnification_),
  };
  region_feature_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      region_feature_descriptor_,
      region_feature::default_instance_,
      region_feature_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_feature, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_feature, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(region_feature));
  region_info_descriptor_ = file->message_type(1);
  static const int region_info_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info, feature_),
  };
  region_info_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      region_info_descriptor_,
      region_info::default_instance_,
      region_info_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(region_info));
  region_info_msg_descriptor_ = file->message_type(2);
  static const int region_info_msg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info_msg, infos_),
  };
  region_info_msg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      region_info_msg_descriptor_,
      region_info_msg::default_instance_,
      region_info_msg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info_msg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_info_msg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(region_info_msg));
  region_complete_msg_descriptor_ = file->message_type(3);
  static const int region_complete_msg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_complete_msg, infos_),
  };
  region_complete_msg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      region_complete_msg_descriptor_,
      region_complete_msg::default_instance_,
      region_complete_msg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_complete_msg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(region_complete_msg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(region_complete_msg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_client_2eregion_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    region_feature_descriptor_, &region_feature::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    region_info_descriptor_, &region_info::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    region_info_msg_descriptor_, &region_info_msg::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    region_complete_msg_descriptor_, &region_complete_msg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_client_2eregion_2eproto() {
  delete region_feature::default_instance_;
  delete region_feature_reflection_;
  delete region_info::default_instance_;
  delete region_info_reflection_;
  delete region_info_msg::default_instance_;
  delete region_info_msg_reflection_;
  delete region_complete_msg::default_instance_;
  delete region_complete_msg_reflection_;
}

void protobuf_AddDesc_client_2eregion_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::client::protobuf_AddDesc_client_2ecomm_2eproto();
  ::client::protobuf_AddDesc_client_2eraid_5foperate_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023client.region.proto\022\006client\032\021client.co"
    "mm.proto\032\031client.raid_operate.proto\"a\n\016r"
    "egion_feature\022\031\n\021exp_magnification\030\001 \001(\002"
    "\022\031\n\021atk_magnification\030\002 \001(\002\022\031\n\021def_magni"
    "fication\030\003 \001(\002\"E\n\013region_info\022\n\n\002id\030\001 \002("
    "\r\022*\n\007feature\030\002 \001(\0132\031.client.raid_success"
    "_info\"5\n\017region_info_msg\022\"\n\005infos\030\001 \003(\0132"
    "\023.client.region_info\"9\n\023region_complete_"
    "msg\022\"\n\005infos\030\001 \003(\0132\023.client.region_info", 359);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "client.region.proto", &protobuf_RegisterTypes);
  region_feature::default_instance_ = new region_feature();
  region_info::default_instance_ = new region_info();
  region_info_msg::default_instance_ = new region_info_msg();
  region_complete_msg::default_instance_ = new region_complete_msg();
  region_feature::default_instance_->InitAsDefaultInstance();
  region_info::default_instance_->InitAsDefaultInstance();
  region_info_msg::default_instance_->InitAsDefaultInstance();
  region_complete_msg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_client_2eregion_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_client_2eregion_2eproto {
  StaticDescriptorInitializer_client_2eregion_2eproto() {
    protobuf_AddDesc_client_2eregion_2eproto();
  }
} static_descriptor_initializer_client_2eregion_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int region_feature::kExpMagnificationFieldNumber;
const int region_feature::kAtkMagnificationFieldNumber;
const int region_feature::kDefMagnificationFieldNumber;
#endif  // !_MSC_VER

region_feature::region_feature()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void region_feature::InitAsDefaultInstance() {
}

region_feature::region_feature(const region_feature& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void region_feature::SharedCtor() {
  _cached_size_ = 0;
  exp_magnification_ = 0;
  atk_magnification_ = 0;
  def_magnification_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

region_feature::~region_feature() {
  SharedDtor();
}

void region_feature::SharedDtor() {
  if (this != default_instance_) {
  }
}

void region_feature::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* region_feature::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return region_feature_descriptor_;
}

const region_feature& region_feature::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2eregion_2eproto();
  return *default_instance_;
}

region_feature* region_feature::default_instance_ = NULL;

region_feature* region_feature::New() const {
  return new region_feature;
}

void region_feature::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    exp_magnification_ = 0;
    atk_magnification_ = 0;
    def_magnification_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool region_feature::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float exp_magnification = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &exp_magnification_)));
          set_has_exp_magnification();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_atk_magnification;
        break;
      }

      // optional float atk_magnification = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_atk_magnification:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &atk_magnification_)));
          set_has_atk_magnification();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_def_magnification;
        break;
      }

      // optional float def_magnification = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_def_magnification:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &def_magnification_)));
          set_has_def_magnification();
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

void region_feature::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional float exp_magnification = 1;
  if (has_exp_magnification()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->exp_magnification(), output);
  }

  // optional float atk_magnification = 2;
  if (has_atk_magnification()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->atk_magnification(), output);
  }

  // optional float def_magnification = 3;
  if (has_def_magnification()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->def_magnification(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* region_feature::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional float exp_magnification = 1;
  if (has_exp_magnification()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->exp_magnification(), target);
  }

  // optional float atk_magnification = 2;
  if (has_atk_magnification()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->atk_magnification(), target);
  }

  // optional float def_magnification = 3;
  if (has_def_magnification()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->def_magnification(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int region_feature::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float exp_magnification = 1;
    if (has_exp_magnification()) {
      total_size += 1 + 4;
    }

    // optional float atk_magnification = 2;
    if (has_atk_magnification()) {
      total_size += 1 + 4;
    }

    // optional float def_magnification = 3;
    if (has_def_magnification()) {
      total_size += 1 + 4;
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

void region_feature::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const region_feature* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const region_feature*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void region_feature::MergeFrom(const region_feature& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_exp_magnification()) {
      set_exp_magnification(from.exp_magnification());
    }
    if (from.has_atk_magnification()) {
      set_atk_magnification(from.atk_magnification());
    }
    if (from.has_def_magnification()) {
      set_def_magnification(from.def_magnification());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void region_feature::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void region_feature::CopyFrom(const region_feature& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool region_feature::IsInitialized() const {

  return true;
}

void region_feature::Swap(region_feature* other) {
  if (other != this) {
    std::swap(exp_magnification_, other->exp_magnification_);
    std::swap(atk_magnification_, other->atk_magnification_);
    std::swap(def_magnification_, other->def_magnification_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata region_feature::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = region_feature_descriptor_;
  metadata.reflection = region_feature_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int region_info::kIdFieldNumber;
const int region_info::kFeatureFieldNumber;
#endif  // !_MSC_VER

region_info::region_info()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void region_info::InitAsDefaultInstance() {
  feature_ = const_cast< ::client::raid_success_info*>(&::client::raid_success_info::default_instance());
}

region_info::region_info(const region_info& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void region_info::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  feature_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

region_info::~region_info() {
  SharedDtor();
}

void region_info::SharedDtor() {
  if (this != default_instance_) {
    delete feature_;
  }
}

void region_info::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* region_info::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return region_info_descriptor_;
}

const region_info& region_info::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2eregion_2eproto();
  return *default_instance_;
}

region_info* region_info::default_instance_ = NULL;

region_info* region_info::New() const {
  return new region_info;
}

void region_info::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
    if (has_feature()) {
      if (feature_ != NULL) feature_->::client::raid_success_info::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool region_info::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_feature;
        break;
      }

      // optional .client.raid_success_info feature = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_feature:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_feature()));
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

void region_info::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional .client.raid_success_info feature = 2;
  if (has_feature()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->feature(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* region_info::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // optional .client.raid_success_info feature = 2;
  if (has_feature()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->feature(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int region_info::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional .client.raid_success_info feature = 2;
    if (has_feature()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->feature());
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

void region_info::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const region_info* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const region_info*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void region_info::MergeFrom(const region_info& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_feature()) {
      mutable_feature()->::client::raid_success_info::MergeFrom(from.feature());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void region_info::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void region_info::CopyFrom(const region_info& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool region_info::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_feature()) {
    if (!this->feature().IsInitialized()) return false;
  }
  return true;
}

void region_info::Swap(region_info* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(feature_, other->feature_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata region_info::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = region_info_descriptor_;
  metadata.reflection = region_info_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int region_info_msg::kInfosFieldNumber;
#endif  // !_MSC_VER

region_info_msg::region_info_msg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void region_info_msg::InitAsDefaultInstance() {
}

region_info_msg::region_info_msg(const region_info_msg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void region_info_msg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

region_info_msg::~region_info_msg() {
  SharedDtor();
}

void region_info_msg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void region_info_msg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* region_info_msg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return region_info_msg_descriptor_;
}

const region_info_msg& region_info_msg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2eregion_2eproto();
  return *default_instance_;
}

region_info_msg* region_info_msg::default_instance_ = NULL;

region_info_msg* region_info_msg::New() const {
  return new region_info_msg;
}

void region_info_msg::Clear() {
  infos_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool region_info_msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .client.region_info infos = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_infos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_infos()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_infos;
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

void region_info_msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .client.region_info infos = 1;
  for (int i = 0; i < this->infos_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->infos(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* region_info_msg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .client.region_info infos = 1;
  for (int i = 0; i < this->infos_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->infos(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int region_info_msg::ByteSize() const {
  int total_size = 0;

  // repeated .client.region_info infos = 1;
  total_size += 1 * this->infos_size();
  for (int i = 0; i < this->infos_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->infos(i));
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

void region_info_msg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const region_info_msg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const region_info_msg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void region_info_msg::MergeFrom(const region_info_msg& from) {
  GOOGLE_CHECK_NE(&from, this);
  infos_.MergeFrom(from.infos_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void region_info_msg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void region_info_msg::CopyFrom(const region_info_msg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool region_info_msg::IsInitialized() const {

  for (int i = 0; i < infos_size(); i++) {
    if (!this->infos(i).IsInitialized()) return false;
  }
  return true;
}

void region_info_msg::Swap(region_info_msg* other) {
  if (other != this) {
    infos_.Swap(&other->infos_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata region_info_msg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = region_info_msg_descriptor_;
  metadata.reflection = region_info_msg_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int region_complete_msg::kInfosFieldNumber;
#endif  // !_MSC_VER

region_complete_msg::region_complete_msg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void region_complete_msg::InitAsDefaultInstance() {
}

region_complete_msg::region_complete_msg(const region_complete_msg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void region_complete_msg::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

region_complete_msg::~region_complete_msg() {
  SharedDtor();
}

void region_complete_msg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void region_complete_msg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* region_complete_msg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return region_complete_msg_descriptor_;
}

const region_complete_msg& region_complete_msg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_client_2eregion_2eproto();
  return *default_instance_;
}

region_complete_msg* region_complete_msg::default_instance_ = NULL;

region_complete_msg* region_complete_msg::New() const {
  return new region_complete_msg;
}

void region_complete_msg::Clear() {
  infos_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool region_complete_msg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .client.region_info infos = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_infos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_infos()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_infos;
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

void region_complete_msg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .client.region_info infos = 1;
  for (int i = 0; i < this->infos_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->infos(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* region_complete_msg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .client.region_info infos = 1;
  for (int i = 0; i < this->infos_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->infos(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int region_complete_msg::ByteSize() const {
  int total_size = 0;

  // repeated .client.region_info infos = 1;
  total_size += 1 * this->infos_size();
  for (int i = 0; i < this->infos_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->infos(i));
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

void region_complete_msg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const region_complete_msg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const region_complete_msg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void region_complete_msg::MergeFrom(const region_complete_msg& from) {
  GOOGLE_CHECK_NE(&from, this);
  infos_.MergeFrom(from.infos_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void region_complete_msg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void region_complete_msg::CopyFrom(const region_complete_msg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool region_complete_msg::IsInitialized() const {

  for (int i = 0; i < infos_size(); i++) {
    if (!this->infos(i).IsInitialized()) return false;
  }
  return true;
}

void region_complete_msg::Swap(region_complete_msg* other) {
  if (other != this) {
    infos_.Swap(&other->infos_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata region_complete_msg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = region_complete_msg_descriptor_;
  metadata.reflection = region_complete_msg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client

// @@protoc_insertion_point(global_scope)