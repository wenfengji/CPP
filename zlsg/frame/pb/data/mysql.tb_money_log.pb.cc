// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysql.tb_money_log.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mysql.tb_money_log.pb.h"

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

namespace mysql {

namespace {

const ::google::protobuf::Descriptor* tb_money_log_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  tb_money_log_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_mysql_2etb_5fmoney_5flog_2eproto() {
  protobuf_AddDesc_mysql_2etb_5fmoney_5flog_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mysql.tb_money_log.proto");
  GOOGLE_CHECK(file != NULL);
  tb_money_log_descriptor_ = file->message_type(0);
  static const int tb_money_log_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, sid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, role_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, root_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, type_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, old_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, new_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, goods_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, create_date_),
  };
  tb_money_log_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      tb_money_log_descriptor_,
      tb_money_log::default_instance_,
      tb_money_log_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(tb_money_log, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(tb_money_log));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mysql_2etb_5fmoney_5flog_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    tb_money_log_descriptor_, &tb_money_log::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mysql_2etb_5fmoney_5flog_2eproto() {
  delete tb_money_log::default_instance_;
  delete tb_money_log_reflection_;
}

void protobuf_AddDesc_mysql_2etb_5fmoney_5flog_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030mysql.tb_money_log.proto\022\005mysql\"\250\001\n\014tb"
    "_money_log\022\013\n\003sid\030\001 \002(\r\022\017\n\007role_id\030\002 \002(\r"
    "\022\017\n\007root_id\030\003 \002(\r\022\017\n\007type_id\030\004 \002(\r\022\021\n\tol"
    "d_value\030\005 \002(\r\022\021\n\tnew_value\030\006 \002(\r\022\020\n\010good"
    "s_id\030\007 \002(\r\022\013\n\003num\030\010 \002(\r\022\023\n\013create_date\030\t"
    " \002(\r", 204);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mysql.tb_money_log.proto", &protobuf_RegisterTypes);
  tb_money_log::default_instance_ = new tb_money_log();
  tb_money_log::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mysql_2etb_5fmoney_5flog_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mysql_2etb_5fmoney_5flog_2eproto {
  StaticDescriptorInitializer_mysql_2etb_5fmoney_5flog_2eproto() {
    protobuf_AddDesc_mysql_2etb_5fmoney_5flog_2eproto();
  }
} static_descriptor_initializer_mysql_2etb_5fmoney_5flog_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int tb_money_log::kSidFieldNumber;
const int tb_money_log::kRoleIdFieldNumber;
const int tb_money_log::kRootIdFieldNumber;
const int tb_money_log::kTypeIdFieldNumber;
const int tb_money_log::kOldValueFieldNumber;
const int tb_money_log::kNewValueFieldNumber;
const int tb_money_log::kGoodsIdFieldNumber;
const int tb_money_log::kNumFieldNumber;
const int tb_money_log::kCreateDateFieldNumber;
#endif  // !_MSC_VER

tb_money_log::tb_money_log()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void tb_money_log::InitAsDefaultInstance() {
}

tb_money_log::tb_money_log(const tb_money_log& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void tb_money_log::SharedCtor() {
  _cached_size_ = 0;
  sid_ = 0u;
  role_id_ = 0u;
  root_id_ = 0u;
  type_id_ = 0u;
  old_value_ = 0u;
  new_value_ = 0u;
  goods_id_ = 0u;
  num_ = 0u;
  create_date_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

tb_money_log::~tb_money_log() {
  SharedDtor();
}

void tb_money_log::SharedDtor() {
  if (this != default_instance_) {
  }
}

void tb_money_log::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* tb_money_log::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return tb_money_log_descriptor_;
}

const tb_money_log& tb_money_log::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mysql_2etb_5fmoney_5flog_2eproto();
  return *default_instance_;
}

tb_money_log* tb_money_log::default_instance_ = NULL;

tb_money_log* tb_money_log::New() const {
  return new tb_money_log;
}

void tb_money_log::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    sid_ = 0u;
    role_id_ = 0u;
    root_id_ = 0u;
    type_id_ = 0u;
    old_value_ = 0u;
    new_value_ = 0u;
    goods_id_ = 0u;
    num_ = 0u;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    create_date_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool tb_money_log::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 sid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sid_)));
          set_has_sid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_role_id;
        break;
      }

      // required uint32 role_id = 2;
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
        if (input->ExpectTag(24)) goto parse_root_id;
        break;
      }

      // required uint32 root_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_root_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &root_id_)));
          set_has_root_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_type_id;
        break;
      }

      // required uint32 type_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_id_)));
          set_has_type_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_old_value;
        break;
      }

      // required uint32 old_value = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_old_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &old_value_)));
          set_has_old_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_new_value;
        break;
      }

      // required uint32 new_value = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_new_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &new_value_)));
          set_has_new_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_goods_id;
        break;
      }

      // required uint32 goods_id = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_goods_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &goods_id_)));
          set_has_goods_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_num;
        break;
      }

      // required uint32 num = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &num_)));
          set_has_num();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_create_date;
        break;
      }

      // required uint32 create_date = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_create_date:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &create_date_)));
          set_has_create_date();
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

void tb_money_log::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 sid = 1;
  if (has_sid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sid(), output);
  }

  // required uint32 role_id = 2;
  if (has_role_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->role_id(), output);
  }

  // required uint32 root_id = 3;
  if (has_root_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->root_id(), output);
  }

  // required uint32 type_id = 4;
  if (has_type_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->type_id(), output);
  }

  // required uint32 old_value = 5;
  if (has_old_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->old_value(), output);
  }

  // required uint32 new_value = 6;
  if (has_new_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->new_value(), output);
  }

  // required uint32 goods_id = 7;
  if (has_goods_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->goods_id(), output);
  }

  // required uint32 num = 8;
  if (has_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->num(), output);
  }

  // required uint32 create_date = 9;
  if (has_create_date()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->create_date(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* tb_money_log::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 sid = 1;
  if (has_sid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sid(), target);
  }

  // required uint32 role_id = 2;
  if (has_role_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->role_id(), target);
  }

  // required uint32 root_id = 3;
  if (has_root_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->root_id(), target);
  }

  // required uint32 type_id = 4;
  if (has_type_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->type_id(), target);
  }

  // required uint32 old_value = 5;
  if (has_old_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->old_value(), target);
  }

  // required uint32 new_value = 6;
  if (has_new_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->new_value(), target);
  }

  // required uint32 goods_id = 7;
  if (has_goods_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->goods_id(), target);
  }

  // required uint32 num = 8;
  if (has_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->num(), target);
  }

  // required uint32 create_date = 9;
  if (has_create_date()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->create_date(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int tb_money_log::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 sid = 1;
    if (has_sid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sid());
    }

    // required uint32 role_id = 2;
    if (has_role_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->role_id());
    }

    // required uint32 root_id = 3;
    if (has_root_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->root_id());
    }

    // required uint32 type_id = 4;
    if (has_type_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->type_id());
    }

    // required uint32 old_value = 5;
    if (has_old_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->old_value());
    }

    // required uint32 new_value = 6;
    if (has_new_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->new_value());
    }

    // required uint32 goods_id = 7;
    if (has_goods_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->goods_id());
    }

    // required uint32 num = 8;
    if (has_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->num());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 create_date = 9;
    if (has_create_date()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->create_date());
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

void tb_money_log::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const tb_money_log* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const tb_money_log*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void tb_money_log::MergeFrom(const tb_money_log& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sid()) {
      set_sid(from.sid());
    }
    if (from.has_role_id()) {
      set_role_id(from.role_id());
    }
    if (from.has_root_id()) {
      set_root_id(from.root_id());
    }
    if (from.has_type_id()) {
      set_type_id(from.type_id());
    }
    if (from.has_old_value()) {
      set_old_value(from.old_value());
    }
    if (from.has_new_value()) {
      set_new_value(from.new_value());
    }
    if (from.has_goods_id()) {
      set_goods_id(from.goods_id());
    }
    if (from.has_num()) {
      set_num(from.num());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_create_date()) {
      set_create_date(from.create_date());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void tb_money_log::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void tb_money_log::CopyFrom(const tb_money_log& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool tb_money_log::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001ff) != 0x000001ff) return false;

  return true;
}

void tb_money_log::Swap(tb_money_log* other) {
  if (other != this) {
    std::swap(sid_, other->sid_);
    std::swap(role_id_, other->role_id_);
    std::swap(root_id_, other->root_id_);
    std::swap(type_id_, other->type_id_);
    std::swap(old_value_, other->old_value_);
    std::swap(new_value_, other->new_value_);
    std::swap(goods_id_, other->goods_id_);
    std::swap(num_, other->num_);
    std::swap(create_date_, other->create_date_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata tb_money_log::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = tb_money_log_descriptor_;
  metadata.reflection = tb_money_log_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mysql

// @@protoc_insertion_point(global_scope)
