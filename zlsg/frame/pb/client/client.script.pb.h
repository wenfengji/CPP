// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.script.proto

#ifndef PROTOBUF_client_2escript_2eproto__INCLUDED
#define PROTOBUF_client_2escript_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "client.comm.pb.h"
// @@protoc_insertion_point(includes)

namespace client {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_client_2escript_2eproto();
void protobuf_AssignDesc_client_2escript_2eproto();
void protobuf_ShutdownFile_client_2escript_2eproto();

class script_pb_msg;

// ===================================================================

class script_pb_msg : public ::google::protobuf::Message {
 public:
  script_pb_msg();
  virtual ~script_pb_msg();

  script_pb_msg(const script_pb_msg& from);

  inline script_pb_msg& operator=(const script_pb_msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const script_pb_msg& default_instance();

  void Swap(script_pb_msg* other);

  // implements Message ----------------------------------------------

  script_pb_msg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const script_pb_msg& from);
  void MergeFrom(const script_pb_msg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string type_name = 1;
  inline bool has_type_name() const;
  inline void clear_type_name();
  static const int kTypeNameFieldNumber = 1;
  inline const ::std::string& type_name() const;
  inline void set_type_name(const ::std::string& value);
  inline void set_type_name(const char* value);
  inline void set_type_name(const char* value, size_t size);
  inline ::std::string* mutable_type_name();
  inline ::std::string* release_type_name();
  inline void set_allocated_type_name(::std::string* type_name);

  // required string bin = 2;
  inline bool has_bin() const;
  inline void clear_bin();
  static const int kBinFieldNumber = 2;
  inline const ::std::string& bin() const;
  inline void set_bin(const ::std::string& value);
  inline void set_bin(const char* value);
  inline void set_bin(const char* value, size_t size);
  inline ::std::string* mutable_bin();
  inline ::std::string* release_bin();
  inline void set_allocated_bin(::std::string* bin);

  // required .client.server_head svr_head = 1000;
  inline bool has_svr_head() const;
  inline void clear_svr_head();
  static const int kSvrHeadFieldNumber = 1000;
  inline const ::client::server_head& svr_head() const;
  inline ::client::server_head* mutable_svr_head();
  inline ::client::server_head* release_svr_head();
  inline void set_allocated_svr_head(::client::server_head* svr_head);

  // @@protoc_insertion_point(class_scope:client.script_pb_msg)
 private:
  inline void set_has_type_name();
  inline void clear_has_type_name();
  inline void set_has_bin();
  inline void clear_has_bin();
  inline void set_has_svr_head();
  inline void clear_has_svr_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* type_name_;
  ::std::string* bin_;
  ::client::server_head* svr_head_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_client_2escript_2eproto();
  friend void protobuf_AssignDesc_client_2escript_2eproto();
  friend void protobuf_ShutdownFile_client_2escript_2eproto();

  void InitAsDefaultInstance();
  static script_pb_msg* default_instance_;
};
// ===================================================================


// ===================================================================

// script_pb_msg

// required string type_name = 1;
inline bool script_pb_msg::has_type_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void script_pb_msg::set_has_type_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void script_pb_msg::clear_has_type_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void script_pb_msg::clear_type_name() {
  if (type_name_ != &::google::protobuf::internal::kEmptyString) {
    type_name_->clear();
  }
  clear_has_type_name();
}
inline const ::std::string& script_pb_msg::type_name() const {
  return *type_name_;
}
inline void script_pb_msg::set_type_name(const ::std::string& value) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(value);
}
inline void script_pb_msg::set_type_name(const char* value) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(value);
}
inline void script_pb_msg::set_type_name(const char* value, size_t size) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* script_pb_msg::mutable_type_name() {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  return type_name_;
}
inline ::std::string* script_pb_msg::release_type_name() {
  clear_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = type_name_;
    type_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void script_pb_msg::set_allocated_type_name(::std::string* type_name) {
  if (type_name_ != &::google::protobuf::internal::kEmptyString) {
    delete type_name_;
  }
  if (type_name) {
    set_has_type_name();
    type_name_ = type_name;
  } else {
    clear_has_type_name();
    type_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required string bin = 2;
inline bool script_pb_msg::has_bin() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void script_pb_msg::set_has_bin() {
  _has_bits_[0] |= 0x00000002u;
}
inline void script_pb_msg::clear_has_bin() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void script_pb_msg::clear_bin() {
  if (bin_ != &::google::protobuf::internal::kEmptyString) {
    bin_->clear();
  }
  clear_has_bin();
}
inline const ::std::string& script_pb_msg::bin() const {
  return *bin_;
}
inline void script_pb_msg::set_bin(const ::std::string& value) {
  set_has_bin();
  if (bin_ == &::google::protobuf::internal::kEmptyString) {
    bin_ = new ::std::string;
  }
  bin_->assign(value);
}
inline void script_pb_msg::set_bin(const char* value) {
  set_has_bin();
  if (bin_ == &::google::protobuf::internal::kEmptyString) {
    bin_ = new ::std::string;
  }
  bin_->assign(value);
}
inline void script_pb_msg::set_bin(const char* value, size_t size) {
  set_has_bin();
  if (bin_ == &::google::protobuf::internal::kEmptyString) {
    bin_ = new ::std::string;
  }
  bin_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* script_pb_msg::mutable_bin() {
  set_has_bin();
  if (bin_ == &::google::protobuf::internal::kEmptyString) {
    bin_ = new ::std::string;
  }
  return bin_;
}
inline ::std::string* script_pb_msg::release_bin() {
  clear_has_bin();
  if (bin_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = bin_;
    bin_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void script_pb_msg::set_allocated_bin(::std::string* bin) {
  if (bin_ != &::google::protobuf::internal::kEmptyString) {
    delete bin_;
  }
  if (bin) {
    set_has_bin();
    bin_ = bin;
  } else {
    clear_has_bin();
    bin_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .client.server_head svr_head = 1000;
inline bool script_pb_msg::has_svr_head() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void script_pb_msg::set_has_svr_head() {
  _has_bits_[0] |= 0x00000004u;
}
inline void script_pb_msg::clear_has_svr_head() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void script_pb_msg::clear_svr_head() {
  if (svr_head_ != NULL) svr_head_->::client::server_head::Clear();
  clear_has_svr_head();
}
inline const ::client::server_head& script_pb_msg::svr_head() const {
  return svr_head_ != NULL ? *svr_head_ : *default_instance_->svr_head_;
}
inline ::client::server_head* script_pb_msg::mutable_svr_head() {
  set_has_svr_head();
  if (svr_head_ == NULL) svr_head_ = new ::client::server_head;
  return svr_head_;
}
inline ::client::server_head* script_pb_msg::release_svr_head() {
  clear_has_svr_head();
  ::client::server_head* temp = svr_head_;
  svr_head_ = NULL;
  return temp;
}
inline void script_pb_msg::set_allocated_svr_head(::client::server_head* svr_head) {
  delete svr_head_;
  svr_head_ = svr_head;
  if (svr_head) {
    set_has_svr_head();
  } else {
    clear_has_svr_head();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace client

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_2escript_2eproto__INCLUDED
