// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.invest.proto

#ifndef PROTOBUF_client_2einvest_2eproto__INCLUDED
#define PROTOBUF_client_2einvest_2eproto__INCLUDED

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
void  protobuf_AddDesc_client_2einvest_2eproto();
void protobuf_AssignDesc_client_2einvest_2eproto();
void protobuf_ShutdownFile_client_2einvest_2eproto();

class invest_req;
class invest_rsp;

// ===================================================================

class invest_req : public ::google::protobuf::Message {
 public:
  invest_req();
  virtual ~invest_req();

  invest_req(const invest_req& from);

  inline invest_req& operator=(const invest_req& from) {
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
  static const invest_req& default_instance();

  void Swap(invest_req* other);

  // implements Message ----------------------------------------------

  invest_req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const invest_req& from);
  void MergeFrom(const invest_req& from);
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

  // required uint32 unixtime = 1;
  inline bool has_unixtime() const;
  inline void clear_unixtime();
  static const int kUnixtimeFieldNumber = 1;
  inline ::google::protobuf::uint32 unixtime() const;
  inline void set_unixtime(::google::protobuf::uint32 value);

  // optional .client.server_head svr_head = 1000;
  inline bool has_svr_head() const;
  inline void clear_svr_head();
  static const int kSvrHeadFieldNumber = 1000;
  inline const ::client::server_head& svr_head() const;
  inline ::client::server_head* mutable_svr_head();
  inline ::client::server_head* release_svr_head();
  inline void set_allocated_svr_head(::client::server_head* svr_head);

  // @@protoc_insertion_point(class_scope:client.invest_req)
 private:
  inline void set_has_unixtime();
  inline void clear_has_unixtime();
  inline void set_has_svr_head();
  inline void clear_has_svr_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::client::server_head* svr_head_;
  ::google::protobuf::uint32 unixtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_client_2einvest_2eproto();
  friend void protobuf_AssignDesc_client_2einvest_2eproto();
  friend void protobuf_ShutdownFile_client_2einvest_2eproto();

  void InitAsDefaultInstance();
  static invest_req* default_instance_;
};
// -------------------------------------------------------------------

class invest_rsp : public ::google::protobuf::Message {
 public:
  invest_rsp();
  virtual ~invest_rsp();

  invest_rsp(const invest_rsp& from);

  inline invest_rsp& operator=(const invest_rsp& from) {
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
  static const invest_rsp& default_instance();

  void Swap(invest_rsp* other);

  // implements Message ----------------------------------------------

  invest_rsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const invest_rsp& from);
  void MergeFrom(const invest_rsp& from);
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

  // required uint32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::uint32 ret() const;
  inline void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:client.invest_rsp)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 ret_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_client_2einvest_2eproto();
  friend void protobuf_AssignDesc_client_2einvest_2eproto();
  friend void protobuf_ShutdownFile_client_2einvest_2eproto();

  void InitAsDefaultInstance();
  static invest_rsp* default_instance_;
};
// ===================================================================


// ===================================================================

// invest_req

// required uint32 unixtime = 1;
inline bool invest_req::has_unixtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void invest_req::set_has_unixtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void invest_req::clear_has_unixtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void invest_req::clear_unixtime() {
  unixtime_ = 0u;
  clear_has_unixtime();
}
inline ::google::protobuf::uint32 invest_req::unixtime() const {
  return unixtime_;
}
inline void invest_req::set_unixtime(::google::protobuf::uint32 value) {
  set_has_unixtime();
  unixtime_ = value;
}

// optional .client.server_head svr_head = 1000;
inline bool invest_req::has_svr_head() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void invest_req::set_has_svr_head() {
  _has_bits_[0] |= 0x00000002u;
}
inline void invest_req::clear_has_svr_head() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void invest_req::clear_svr_head() {
  if (svr_head_ != NULL) svr_head_->::client::server_head::Clear();
  clear_has_svr_head();
}
inline const ::client::server_head& invest_req::svr_head() const {
  return svr_head_ != NULL ? *svr_head_ : *default_instance_->svr_head_;
}
inline ::client::server_head* invest_req::mutable_svr_head() {
  set_has_svr_head();
  if (svr_head_ == NULL) svr_head_ = new ::client::server_head;
  return svr_head_;
}
inline ::client::server_head* invest_req::release_svr_head() {
  clear_has_svr_head();
  ::client::server_head* temp = svr_head_;
  svr_head_ = NULL;
  return temp;
}
inline void invest_req::set_allocated_svr_head(::client::server_head* svr_head) {
  delete svr_head_;
  svr_head_ = svr_head;
  if (svr_head) {
    set_has_svr_head();
  } else {
    clear_has_svr_head();
  }
}

// -------------------------------------------------------------------

// invest_rsp

// required uint32 ret = 1;
inline bool invest_rsp::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void invest_rsp::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void invest_rsp::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void invest_rsp::clear_ret() {
  ret_ = 0u;
  clear_has_ret();
}
inline ::google::protobuf::uint32 invest_rsp::ret() const {
  return ret_;
}
inline void invest_rsp::set_ret(::google::protobuf::uint32 value) {
  set_has_ret();
  ret_ = value;
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

#endif  // PROTOBUF_client_2einvest_2eproto__INCLUDED