// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: inner.server.proto

#ifndef PROTOBUF_inner_2eserver_2eproto__INCLUDED
#define PROTOBUF_inner_2eserver_2eproto__INCLUDED

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
#include "inner.comm.pb.h"
// @@protoc_insertion_point(includes)

namespace inner {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_inner_2eserver_2eproto();
void protobuf_AssignDesc_inner_2eserver_2eproto();
void protobuf_ShutdownFile_inner_2eserver_2eproto();

class start_time_req;
class start_time_rsp;
class open_gm_req;
class open_gm_rsp;

// ===================================================================

class start_time_req : public ::google::protobuf::Message {
 public:
  start_time_req();
  virtual ~start_time_req();

  start_time_req(const start_time_req& from);

  inline start_time_req& operator=(const start_time_req& from) {
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
  static const start_time_req& default_instance();

  void Swap(start_time_req* other);

  // implements Message ----------------------------------------------

  start_time_req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const start_time_req& from);
  void MergeFrom(const start_time_req& from);
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

  // optional .inner.inner_head head = 1000;
  inline bool has_head() const;
  inline void clear_head();
  static const int kHeadFieldNumber = 1000;
  inline const ::inner::inner_head& head() const;
  inline ::inner::inner_head* mutable_head();
  inline ::inner::inner_head* release_head();
  inline void set_allocated_head(::inner::inner_head* head);

  // @@protoc_insertion_point(class_scope:inner.start_time_req)
 private:
  inline void set_has_unixtime();
  inline void clear_has_unixtime();
  inline void set_has_head();
  inline void clear_has_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::inner::inner_head* head_;
  ::google::protobuf::uint32 unixtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_inner_2eserver_2eproto();
  friend void protobuf_AssignDesc_inner_2eserver_2eproto();
  friend void protobuf_ShutdownFile_inner_2eserver_2eproto();

  void InitAsDefaultInstance();
  static start_time_req* default_instance_;
};
// -------------------------------------------------------------------

class start_time_rsp : public ::google::protobuf::Message {
 public:
  start_time_rsp();
  virtual ~start_time_rsp();

  start_time_rsp(const start_time_rsp& from);

  inline start_time_rsp& operator=(const start_time_rsp& from) {
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
  static const start_time_rsp& default_instance();

  void Swap(start_time_rsp* other);

  // implements Message ----------------------------------------------

  start_time_rsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const start_time_rsp& from);
  void MergeFrom(const start_time_rsp& from);
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

  // required .inner.inner_tail tail = 1000;
  inline bool has_tail() const;
  inline void clear_tail();
  static const int kTailFieldNumber = 1000;
  inline const ::inner::inner_tail& tail() const;
  inline ::inner::inner_tail* mutable_tail();
  inline ::inner::inner_tail* release_tail();
  inline void set_allocated_tail(::inner::inner_tail* tail);

  // @@protoc_insertion_point(class_scope:inner.start_time_rsp)
 private:
  inline void set_has_unixtime();
  inline void clear_has_unixtime();
  inline void set_has_tail();
  inline void clear_has_tail();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::inner::inner_tail* tail_;
  ::google::protobuf::uint32 unixtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_inner_2eserver_2eproto();
  friend void protobuf_AssignDesc_inner_2eserver_2eproto();
  friend void protobuf_ShutdownFile_inner_2eserver_2eproto();

  void InitAsDefaultInstance();
  static start_time_rsp* default_instance_;
};
// -------------------------------------------------------------------

class open_gm_req : public ::google::protobuf::Message {
 public:
  open_gm_req();
  virtual ~open_gm_req();

  open_gm_req(const open_gm_req& from);

  inline open_gm_req& operator=(const open_gm_req& from) {
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
  static const open_gm_req& default_instance();

  void Swap(open_gm_req* other);

  // implements Message ----------------------------------------------

  open_gm_req* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const open_gm_req& from);
  void MergeFrom(const open_gm_req& from);
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

  // optional .inner.inner_head head = 1000;
  inline bool has_head() const;
  inline void clear_head();
  static const int kHeadFieldNumber = 1000;
  inline const ::inner::inner_head& head() const;
  inline ::inner::inner_head* mutable_head();
  inline ::inner::inner_head* release_head();
  inline void set_allocated_head(::inner::inner_head* head);

  // @@protoc_insertion_point(class_scope:inner.open_gm_req)
 private:
  inline void set_has_unixtime();
  inline void clear_has_unixtime();
  inline void set_has_head();
  inline void clear_has_head();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::inner::inner_head* head_;
  ::google::protobuf::uint32 unixtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_inner_2eserver_2eproto();
  friend void protobuf_AssignDesc_inner_2eserver_2eproto();
  friend void protobuf_ShutdownFile_inner_2eserver_2eproto();

  void InitAsDefaultInstance();
  static open_gm_req* default_instance_;
};
// -------------------------------------------------------------------

class open_gm_rsp : public ::google::protobuf::Message {
 public:
  open_gm_rsp();
  virtual ~open_gm_rsp();

  open_gm_rsp(const open_gm_rsp& from);

  inline open_gm_rsp& operator=(const open_gm_rsp& from) {
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
  static const open_gm_rsp& default_instance();

  void Swap(open_gm_rsp* other);

  // implements Message ----------------------------------------------

  open_gm_rsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const open_gm_rsp& from);
  void MergeFrom(const open_gm_rsp& from);
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

  // required .inner.inner_tail tail = 1000;
  inline bool has_tail() const;
  inline void clear_tail();
  static const int kTailFieldNumber = 1000;
  inline const ::inner::inner_tail& tail() const;
  inline ::inner::inner_tail* mutable_tail();
  inline ::inner::inner_tail* release_tail();
  inline void set_allocated_tail(::inner::inner_tail* tail);

  // @@protoc_insertion_point(class_scope:inner.open_gm_rsp)
 private:
  inline void set_has_unixtime();
  inline void clear_has_unixtime();
  inline void set_has_tail();
  inline void clear_has_tail();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::inner::inner_tail* tail_;
  ::google::protobuf::uint32 unixtime_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_inner_2eserver_2eproto();
  friend void protobuf_AssignDesc_inner_2eserver_2eproto();
  friend void protobuf_ShutdownFile_inner_2eserver_2eproto();

  void InitAsDefaultInstance();
  static open_gm_rsp* default_instance_;
};
// ===================================================================


// ===================================================================

// start_time_req

// required uint32 unixtime = 1;
inline bool start_time_req::has_unixtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void start_time_req::set_has_unixtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void start_time_req::clear_has_unixtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void start_time_req::clear_unixtime() {
  unixtime_ = 0u;
  clear_has_unixtime();
}
inline ::google::protobuf::uint32 start_time_req::unixtime() const {
  return unixtime_;
}
inline void start_time_req::set_unixtime(::google::protobuf::uint32 value) {
  set_has_unixtime();
  unixtime_ = value;
}

// optional .inner.inner_head head = 1000;
inline bool start_time_req::has_head() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void start_time_req::set_has_head() {
  _has_bits_[0] |= 0x00000002u;
}
inline void start_time_req::clear_has_head() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void start_time_req::clear_head() {
  if (head_ != NULL) head_->::inner::inner_head::Clear();
  clear_has_head();
}
inline const ::inner::inner_head& start_time_req::head() const {
  return head_ != NULL ? *head_ : *default_instance_->head_;
}
inline ::inner::inner_head* start_time_req::mutable_head() {
  set_has_head();
  if (head_ == NULL) head_ = new ::inner::inner_head;
  return head_;
}
inline ::inner::inner_head* start_time_req::release_head() {
  clear_has_head();
  ::inner::inner_head* temp = head_;
  head_ = NULL;
  return temp;
}
inline void start_time_req::set_allocated_head(::inner::inner_head* head) {
  delete head_;
  head_ = head;
  if (head) {
    set_has_head();
  } else {
    clear_has_head();
  }
}

// -------------------------------------------------------------------

// start_time_rsp

// required uint32 unixtime = 1;
inline bool start_time_rsp::has_unixtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void start_time_rsp::set_has_unixtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void start_time_rsp::clear_has_unixtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void start_time_rsp::clear_unixtime() {
  unixtime_ = 0u;
  clear_has_unixtime();
}
inline ::google::protobuf::uint32 start_time_rsp::unixtime() const {
  return unixtime_;
}
inline void start_time_rsp::set_unixtime(::google::protobuf::uint32 value) {
  set_has_unixtime();
  unixtime_ = value;
}

// required .inner.inner_tail tail = 1000;
inline bool start_time_rsp::has_tail() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void start_time_rsp::set_has_tail() {
  _has_bits_[0] |= 0x00000002u;
}
inline void start_time_rsp::clear_has_tail() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void start_time_rsp::clear_tail() {
  if (tail_ != NULL) tail_->::inner::inner_tail::Clear();
  clear_has_tail();
}
inline const ::inner::inner_tail& start_time_rsp::tail() const {
  return tail_ != NULL ? *tail_ : *default_instance_->tail_;
}
inline ::inner::inner_tail* start_time_rsp::mutable_tail() {
  set_has_tail();
  if (tail_ == NULL) tail_ = new ::inner::inner_tail;
  return tail_;
}
inline ::inner::inner_tail* start_time_rsp::release_tail() {
  clear_has_tail();
  ::inner::inner_tail* temp = tail_;
  tail_ = NULL;
  return temp;
}
inline void start_time_rsp::set_allocated_tail(::inner::inner_tail* tail) {
  delete tail_;
  tail_ = tail;
  if (tail) {
    set_has_tail();
  } else {
    clear_has_tail();
  }
}

// -------------------------------------------------------------------

// open_gm_req

// required uint32 unixtime = 1;
inline bool open_gm_req::has_unixtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void open_gm_req::set_has_unixtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void open_gm_req::clear_has_unixtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void open_gm_req::clear_unixtime() {
  unixtime_ = 0u;
  clear_has_unixtime();
}
inline ::google::protobuf::uint32 open_gm_req::unixtime() const {
  return unixtime_;
}
inline void open_gm_req::set_unixtime(::google::protobuf::uint32 value) {
  set_has_unixtime();
  unixtime_ = value;
}

// optional .inner.inner_head head = 1000;
inline bool open_gm_req::has_head() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void open_gm_req::set_has_head() {
  _has_bits_[0] |= 0x00000002u;
}
inline void open_gm_req::clear_has_head() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void open_gm_req::clear_head() {
  if (head_ != NULL) head_->::inner::inner_head::Clear();
  clear_has_head();
}
inline const ::inner::inner_head& open_gm_req::head() const {
  return head_ != NULL ? *head_ : *default_instance_->head_;
}
inline ::inner::inner_head* open_gm_req::mutable_head() {
  set_has_head();
  if (head_ == NULL) head_ = new ::inner::inner_head;
  return head_;
}
inline ::inner::inner_head* open_gm_req::release_head() {
  clear_has_head();
  ::inner::inner_head* temp = head_;
  head_ = NULL;
  return temp;
}
inline void open_gm_req::set_allocated_head(::inner::inner_head* head) {
  delete head_;
  head_ = head;
  if (head) {
    set_has_head();
  } else {
    clear_has_head();
  }
}

// -------------------------------------------------------------------

// open_gm_rsp

// required uint32 unixtime = 1;
inline bool open_gm_rsp::has_unixtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void open_gm_rsp::set_has_unixtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void open_gm_rsp::clear_has_unixtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void open_gm_rsp::clear_unixtime() {
  unixtime_ = 0u;
  clear_has_unixtime();
}
inline ::google::protobuf::uint32 open_gm_rsp::unixtime() const {
  return unixtime_;
}
inline void open_gm_rsp::set_unixtime(::google::protobuf::uint32 value) {
  set_has_unixtime();
  unixtime_ = value;
}

// required .inner.inner_tail tail = 1000;
inline bool open_gm_rsp::has_tail() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void open_gm_rsp::set_has_tail() {
  _has_bits_[0] |= 0x00000002u;
}
inline void open_gm_rsp::clear_has_tail() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void open_gm_rsp::clear_tail() {
  if (tail_ != NULL) tail_->::inner::inner_tail::Clear();
  clear_has_tail();
}
inline const ::inner::inner_tail& open_gm_rsp::tail() const {
  return tail_ != NULL ? *tail_ : *default_instance_->tail_;
}
inline ::inner::inner_tail* open_gm_rsp::mutable_tail() {
  set_has_tail();
  if (tail_ == NULL) tail_ = new ::inner::inner_tail;
  return tail_;
}
inline ::inner::inner_tail* open_gm_rsp::release_tail() {
  clear_has_tail();
  ::inner::inner_tail* temp = tail_;
  tail_ = NULL;
  return temp;
}
inline void open_gm_rsp::set_allocated_tail(::inner::inner_tail* tail) {
  delete tail_;
  tail_ = tail;
  if (tail) {
    set_has_tail();
  } else {
    clear_has_tail();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace inner

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_inner_2eserver_2eproto__INCLUDED
