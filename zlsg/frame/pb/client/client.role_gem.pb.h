// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.role_gem.proto

#ifndef PROTOBUF_client_2erole_5fgem_2eproto__INCLUDED
#define PROTOBUF_client_2erole_5fgem_2eproto__INCLUDED

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
void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

class gem_info;
class gem_list_req;
class gem_list_rsp;
class gem_level_up_req;
class gem_level_up_rsp;

// ===================================================================

class gem_info : public ::google::protobuf::Message {
 public:
  gem_info();
  virtual ~gem_info();

  gem_info(const gem_info& from);

  inline gem_info& operator=(const gem_info& from) {
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
  static const gem_info& default_instance();

  void Swap(gem_info* other);

  // implements Message ----------------------------------------------

  gem_info* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gem_info& from);
  void MergeFrom(const gem_info& from);
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

  // optional uint32 hole_id = 1;
  inline bool has_hole_id() const;
  inline void clear_hole_id();
  static const int kHoleIdFieldNumber = 1;
  inline ::google::protobuf::uint32 hole_id() const;
  inline void set_hole_id(::google::protobuf::uint32 value);

  // optional uint32 gem_type = 2;
  inline bool has_gem_type() const;
  inline void clear_gem_type();
  static const int kGemTypeFieldNumber = 2;
  inline ::google::protobuf::uint32 gem_type() const;
  inline void set_gem_type(::google::protobuf::uint32 value);

  // optional uint32 gem_level = 3;
  inline bool has_gem_level() const;
  inline void clear_gem_level();
  static const int kGemLevelFieldNumber = 3;
  inline ::google::protobuf::uint32 gem_level() const;
  inline void set_gem_level(::google::protobuf::uint32 value);

  // optional uint32 gem_exp = 4;
  inline bool has_gem_exp() const;
  inline void clear_gem_exp();
  static const int kGemExpFieldNumber = 4;
  inline ::google::protobuf::uint32 gem_exp() const;
  inline void set_gem_exp(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:client.gem_info)
 private:
  inline void set_has_hole_id();
  inline void clear_has_hole_id();
  inline void set_has_gem_type();
  inline void clear_has_gem_type();
  inline void set_has_gem_level();
  inline void clear_has_gem_level();
  inline void set_has_gem_exp();
  inline void clear_has_gem_exp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 hole_id_;
  ::google::protobuf::uint32 gem_type_;
  ::google::protobuf::uint32 gem_level_;
  ::google::protobuf::uint32 gem_exp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

  void InitAsDefaultInstance();
  static gem_info* default_instance_;
};
// -------------------------------------------------------------------

class gem_list_req : public ::google::protobuf::Message {
 public:
  gem_list_req();
  virtual ~gem_list_req();

  gem_list_req(const gem_list_req& from);

  inline gem_list_req& operator=(const gem_list_req& from) {
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
  static const gem_list_req& default_instance();

  void Swap(gem_list_req* other);

  // implements Message ----------------------------------------------

  gem_list_req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gem_list_req& from);
  void MergeFrom(const gem_list_req& from);
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

  // required uint32 time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline ::google::protobuf::uint32 time() const;
  inline void set_time(::google::protobuf::uint32 value);

  // optional .client.server_head svr_head = 1000;
  inline bool has_svr_head() const;
  inline void clear_svr_head();
  static const int kSvrHeadFieldNumber = 1000;
  inline const ::client::server_head& svr_head() const;
  inline ::client::server_head* mutable_svr_head();
  inline ::client::server_head* release_svr_head();
  inline void set_allocated_svr_head(::client::server_head* svr_head);

  // @@protoc_insertion_point(class_scope:client.gem_list_req)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_svr_head();
  inline void clear_has_svr_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::client::server_head* svr_head_;
  ::google::protobuf::uint32 time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

  void InitAsDefaultInstance();
  static gem_list_req* default_instance_;
};
// -------------------------------------------------------------------

class gem_list_rsp : public ::google::protobuf::Message {
 public:
  gem_list_rsp();
  virtual ~gem_list_rsp();

  gem_list_rsp(const gem_list_rsp& from);

  inline gem_list_rsp& operator=(const gem_list_rsp& from) {
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
  static const gem_list_rsp& default_instance();

  void Swap(gem_list_rsp* other);

  // implements Message ----------------------------------------------

  gem_list_rsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gem_list_rsp& from);
  void MergeFrom(const gem_list_rsp& from);
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

  // required uint32 list_type = 1;
  inline bool has_list_type() const;
  inline void clear_list_type();
  static const int kListTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 list_type() const;
  inline void set_list_type(::google::protobuf::uint32 value);

  // repeated .client.gem_info info = 2;
  inline int info_size() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 2;
  inline const ::client::gem_info& info(int index) const;
  inline ::client::gem_info* mutable_info(int index);
  inline ::client::gem_info* add_info();
  inline const ::google::protobuf::RepeatedPtrField< ::client::gem_info >&
      info() const;
  inline ::google::protobuf::RepeatedPtrField< ::client::gem_info >*
      mutable_info();

  // @@protoc_insertion_point(class_scope:client.gem_list_rsp)
 private:
  inline void set_has_list_type();
  inline void clear_has_list_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::client::gem_info > info_;
  ::google::protobuf::uint32 list_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

  void InitAsDefaultInstance();
  static gem_list_rsp* default_instance_;
};
// -------------------------------------------------------------------

class gem_level_up_req : public ::google::protobuf::Message {
 public:
  gem_level_up_req();
  virtual ~gem_level_up_req();

  gem_level_up_req(const gem_level_up_req& from);

  inline gem_level_up_req& operator=(const gem_level_up_req& from) {
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
  static const gem_level_up_req& default_instance();

  void Swap(gem_level_up_req* other);

  // implements Message ----------------------------------------------

  gem_level_up_req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gem_level_up_req& from);
  void MergeFrom(const gem_level_up_req& from);
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

  // required uint32 gem_pos = 1;
  inline bool has_gem_pos() const;
  inline void clear_gem_pos();
  static const int kGemPosFieldNumber = 1;
  inline ::google::protobuf::uint32 gem_pos() const;
  inline void set_gem_pos(::google::protobuf::uint32 value);

  // optional .client.server_head svr_head = 1000;
  inline bool has_svr_head() const;
  inline void clear_svr_head();
  static const int kSvrHeadFieldNumber = 1000;
  inline const ::client::server_head& svr_head() const;
  inline ::client::server_head* mutable_svr_head();
  inline ::client::server_head* release_svr_head();
  inline void set_allocated_svr_head(::client::server_head* svr_head);

  // @@protoc_insertion_point(class_scope:client.gem_level_up_req)
 private:
  inline void set_has_gem_pos();
  inline void clear_has_gem_pos();
  inline void set_has_svr_head();
  inline void clear_has_svr_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::client::server_head* svr_head_;
  ::google::protobuf::uint32 gem_pos_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

  void InitAsDefaultInstance();
  static gem_level_up_req* default_instance_;
};
// -------------------------------------------------------------------

class gem_level_up_rsp : public ::google::protobuf::Message {
 public:
  gem_level_up_rsp();
  virtual ~gem_level_up_rsp();

  gem_level_up_rsp(const gem_level_up_rsp& from);

  inline gem_level_up_rsp& operator=(const gem_level_up_rsp& from) {
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
  static const gem_level_up_rsp& default_instance();

  void Swap(gem_level_up_rsp* other);

  // implements Message ----------------------------------------------

  gem_level_up_rsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gem_level_up_rsp& from);
  void MergeFrom(const gem_level_up_rsp& from);
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

  // required uint32 result_type = 1;
  inline bool has_result_type() const;
  inline void clear_result_type();
  static const int kResultTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 result_type() const;
  inline void set_result_type(::google::protobuf::uint32 value);

  // required uint32 gem_pos = 2;
  inline bool has_gem_pos() const;
  inline void clear_gem_pos();
  static const int kGemPosFieldNumber = 2;
  inline ::google::protobuf::uint32 gem_pos() const;
  inline void set_gem_pos(::google::protobuf::uint32 value);

  // optional uint32 cir_count = 3;
  inline bool has_cir_count() const;
  inline void clear_cir_count();
  static const int kCirCountFieldNumber = 3;
  inline ::google::protobuf::uint32 cir_count() const;
  inline void set_cir_count(::google::protobuf::uint32 value);

  // repeated .client.gem_info info = 4;
  inline int info_size() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 4;
  inline const ::client::gem_info& info(int index) const;
  inline ::client::gem_info* mutable_info(int index);
  inline ::client::gem_info* add_info();
  inline const ::google::protobuf::RepeatedPtrField< ::client::gem_info >&
      info() const;
  inline ::google::protobuf::RepeatedPtrField< ::client::gem_info >*
      mutable_info();

  // @@protoc_insertion_point(class_scope:client.gem_level_up_rsp)
 private:
  inline void set_has_result_type();
  inline void clear_has_result_type();
  inline void set_has_gem_pos();
  inline void clear_has_gem_pos();
  inline void set_has_cir_count();
  inline void clear_has_cir_count();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 result_type_;
  ::google::protobuf::uint32 gem_pos_;
  ::google::protobuf::RepeatedPtrField< ::client::gem_info > info_;
  ::google::protobuf::uint32 cir_count_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_AssignDesc_client_2erole_5fgem_2eproto();
  friend void protobuf_ShutdownFile_client_2erole_5fgem_2eproto();

  void InitAsDefaultInstance();
  static gem_level_up_rsp* default_instance_;
};
// ===================================================================


// ===================================================================

// gem_info

// optional uint32 hole_id = 1;
inline bool gem_info::has_hole_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gem_info::set_has_hole_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gem_info::clear_has_hole_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gem_info::clear_hole_id() {
  hole_id_ = 0u;
  clear_has_hole_id();
}
inline ::google::protobuf::uint32 gem_info::hole_id() const {
  return hole_id_;
}
inline void gem_info::set_hole_id(::google::protobuf::uint32 value) {
  set_has_hole_id();
  hole_id_ = value;
}

// optional uint32 gem_type = 2;
inline bool gem_info::has_gem_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gem_info::set_has_gem_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gem_info::clear_has_gem_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gem_info::clear_gem_type() {
  gem_type_ = 0u;
  clear_has_gem_type();
}
inline ::google::protobuf::uint32 gem_info::gem_type() const {
  return gem_type_;
}
inline void gem_info::set_gem_type(::google::protobuf::uint32 value) {
  set_has_gem_type();
  gem_type_ = value;
}

// optional uint32 gem_level = 3;
inline bool gem_info::has_gem_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void gem_info::set_has_gem_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void gem_info::clear_has_gem_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void gem_info::clear_gem_level() {
  gem_level_ = 0u;
  clear_has_gem_level();
}
inline ::google::protobuf::uint32 gem_info::gem_level() const {
  return gem_level_;
}
inline void gem_info::set_gem_level(::google::protobuf::uint32 value) {
  set_has_gem_level();
  gem_level_ = value;
}

// optional uint32 gem_exp = 4;
inline bool gem_info::has_gem_exp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void gem_info::set_has_gem_exp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void gem_info::clear_has_gem_exp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void gem_info::clear_gem_exp() {
  gem_exp_ = 0u;
  clear_has_gem_exp();
}
inline ::google::protobuf::uint32 gem_info::gem_exp() const {
  return gem_exp_;
}
inline void gem_info::set_gem_exp(::google::protobuf::uint32 value) {
  set_has_gem_exp();
  gem_exp_ = value;
}

// -------------------------------------------------------------------

// gem_list_req

// required uint32 time = 1;
inline bool gem_list_req::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gem_list_req::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gem_list_req::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gem_list_req::clear_time() {
  time_ = 0u;
  clear_has_time();
}
inline ::google::protobuf::uint32 gem_list_req::time() const {
  return time_;
}
inline void gem_list_req::set_time(::google::protobuf::uint32 value) {
  set_has_time();
  time_ = value;
}

// optional .client.server_head svr_head = 1000;
inline bool gem_list_req::has_svr_head() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gem_list_req::set_has_svr_head() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gem_list_req::clear_has_svr_head() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gem_list_req::clear_svr_head() {
  if (svr_head_ != NULL) svr_head_->::client::server_head::Clear();
  clear_has_svr_head();
}
inline const ::client::server_head& gem_list_req::svr_head() const {
  return svr_head_ != NULL ? *svr_head_ : *default_instance_->svr_head_;
}
inline ::client::server_head* gem_list_req::mutable_svr_head() {
  set_has_svr_head();
  if (svr_head_ == NULL) svr_head_ = new ::client::server_head;
  return svr_head_;
}
inline ::client::server_head* gem_list_req::release_svr_head() {
  clear_has_svr_head();
  ::client::server_head* temp = svr_head_;
  svr_head_ = NULL;
  return temp;
}
inline void gem_list_req::set_allocated_svr_head(::client::server_head* svr_head) {
  delete svr_head_;
  svr_head_ = svr_head;
  if (svr_head) {
    set_has_svr_head();
  } else {
    clear_has_svr_head();
  }
}

// -------------------------------------------------------------------

// gem_list_rsp

// required uint32 list_type = 1;
inline bool gem_list_rsp::has_list_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gem_list_rsp::set_has_list_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gem_list_rsp::clear_has_list_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gem_list_rsp::clear_list_type() {
  list_type_ = 0u;
  clear_has_list_type();
}
inline ::google::protobuf::uint32 gem_list_rsp::list_type() const {
  return list_type_;
}
inline void gem_list_rsp::set_list_type(::google::protobuf::uint32 value) {
  set_has_list_type();
  list_type_ = value;
}

// repeated .client.gem_info info = 2;
inline int gem_list_rsp::info_size() const {
  return info_.size();
}
inline void gem_list_rsp::clear_info() {
  info_.Clear();
}
inline const ::client::gem_info& gem_list_rsp::info(int index) const {
  return info_.Get(index);
}
inline ::client::gem_info* gem_list_rsp::mutable_info(int index) {
  return info_.Mutable(index);
}
inline ::client::gem_info* gem_list_rsp::add_info() {
  return info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::client::gem_info >&
gem_list_rsp::info() const {
  return info_;
}
inline ::google::protobuf::RepeatedPtrField< ::client::gem_info >*
gem_list_rsp::mutable_info() {
  return &info_;
}

// -------------------------------------------------------------------

// gem_level_up_req

// required uint32 gem_pos = 1;
inline bool gem_level_up_req::has_gem_pos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gem_level_up_req::set_has_gem_pos() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gem_level_up_req::clear_has_gem_pos() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gem_level_up_req::clear_gem_pos() {
  gem_pos_ = 0u;
  clear_has_gem_pos();
}
inline ::google::protobuf::uint32 gem_level_up_req::gem_pos() const {
  return gem_pos_;
}
inline void gem_level_up_req::set_gem_pos(::google::protobuf::uint32 value) {
  set_has_gem_pos();
  gem_pos_ = value;
}

// optional .client.server_head svr_head = 1000;
inline bool gem_level_up_req::has_svr_head() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gem_level_up_req::set_has_svr_head() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gem_level_up_req::clear_has_svr_head() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gem_level_up_req::clear_svr_head() {
  if (svr_head_ != NULL) svr_head_->::client::server_head::Clear();
  clear_has_svr_head();
}
inline const ::client::server_head& gem_level_up_req::svr_head() const {
  return svr_head_ != NULL ? *svr_head_ : *default_instance_->svr_head_;
}
inline ::client::server_head* gem_level_up_req::mutable_svr_head() {
  set_has_svr_head();
  if (svr_head_ == NULL) svr_head_ = new ::client::server_head;
  return svr_head_;
}
inline ::client::server_head* gem_level_up_req::release_svr_head() {
  clear_has_svr_head();
  ::client::server_head* temp = svr_head_;
  svr_head_ = NULL;
  return temp;
}
inline void gem_level_up_req::set_allocated_svr_head(::client::server_head* svr_head) {
  delete svr_head_;
  svr_head_ = svr_head;
  if (svr_head) {
    set_has_svr_head();
  } else {
    clear_has_svr_head();
  }
}

// -------------------------------------------------------------------

// gem_level_up_rsp

// required uint32 result_type = 1;
inline bool gem_level_up_rsp::has_result_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gem_level_up_rsp::set_has_result_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gem_level_up_rsp::clear_has_result_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gem_level_up_rsp::clear_result_type() {
  result_type_ = 0u;
  clear_has_result_type();
}
inline ::google::protobuf::uint32 gem_level_up_rsp::result_type() const {
  return result_type_;
}
inline void gem_level_up_rsp::set_result_type(::google::protobuf::uint32 value) {
  set_has_result_type();
  result_type_ = value;
}

// required uint32 gem_pos = 2;
inline bool gem_level_up_rsp::has_gem_pos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gem_level_up_rsp::set_has_gem_pos() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gem_level_up_rsp::clear_has_gem_pos() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gem_level_up_rsp::clear_gem_pos() {
  gem_pos_ = 0u;
  clear_has_gem_pos();
}
inline ::google::protobuf::uint32 gem_level_up_rsp::gem_pos() const {
  return gem_pos_;
}
inline void gem_level_up_rsp::set_gem_pos(::google::protobuf::uint32 value) {
  set_has_gem_pos();
  gem_pos_ = value;
}

// optional uint32 cir_count = 3;
inline bool gem_level_up_rsp::has_cir_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void gem_level_up_rsp::set_has_cir_count() {
  _has_bits_[0] |= 0x00000004u;
}
inline void gem_level_up_rsp::clear_has_cir_count() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void gem_level_up_rsp::clear_cir_count() {
  cir_count_ = 0u;
  clear_has_cir_count();
}
inline ::google::protobuf::uint32 gem_level_up_rsp::cir_count() const {
  return cir_count_;
}
inline void gem_level_up_rsp::set_cir_count(::google::protobuf::uint32 value) {
  set_has_cir_count();
  cir_count_ = value;
}

// repeated .client.gem_info info = 4;
inline int gem_level_up_rsp::info_size() const {
  return info_.size();
}
inline void gem_level_up_rsp::clear_info() {
  info_.Clear();
}
inline const ::client::gem_info& gem_level_up_rsp::info(int index) const {
  return info_.Get(index);
}
inline ::client::gem_info* gem_level_up_rsp::mutable_info(int index) {
  return info_.Mutable(index);
}
inline ::client::gem_info* gem_level_up_rsp::add_info() {
  return info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::client::gem_info >&
gem_level_up_rsp::info() const {
  return info_;
}
inline ::google::protobuf::RepeatedPtrField< ::client::gem_info >*
gem_level_up_rsp::mutable_info() {
  return &info_;
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

#endif  // PROTOBUF_client_2erole_5fgem_2eproto__INCLUDED