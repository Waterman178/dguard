/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dgiSecureEraseTypes_TYPES_H
#define dgiSecureEraseTypes_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>
#include "dgiCommonTypes_types.h"


namespace dgi {

struct EraseObjectType {
  enum type {
    Erase_Unknown = 0,
    Erase_File = 1,
    Erase_Directory = 2,
    Erase_HardDisk = 3
  };
};

extern const std::map<int, const char*> _EraseObjectType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const EraseObjectType::type& val);

typedef std::vector<class EraseObject>  EraseList;

typedef std::vector<class EraseObjectError>  EraseErrorList;

class EraseObject;

class EraseObjectError;

class EraseResponse;

typedef struct _EraseObject__isset {
  _EraseObject__isset() : type(false), path(false) {}
  bool type :1;
  bool path :1;
} _EraseObject__isset;

class EraseObject : public virtual ::apache::thrift::TBase {
 public:

  EraseObject(const EraseObject&);
  EraseObject& operator=(const EraseObject&);
  EraseObject() : type((EraseObjectType::type)0), path() {
  }

  virtual ~EraseObject() throw();
  EraseObjectType::type type;
  std::string path;

  _EraseObject__isset __isset;

  void __set_type(const EraseObjectType::type val);

  void __set_path(const std::string& val);

  bool operator == (const EraseObject & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(path == rhs.path))
      return false;
    return true;
  }
  bool operator != (const EraseObject &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EraseObject & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EraseObject &a, EraseObject &b);

std::ostream& operator<<(std::ostream& out, const EraseObject& obj);

typedef struct _EraseObjectError__isset {
  _EraseObjectError__isset() : erObject(false), status(false), description(false) {}
  bool erObject :1;
  bool status :1;
  bool description :1;
} _EraseObjectError__isset;

class EraseObjectError : public virtual ::apache::thrift::TBase {
 public:

  EraseObjectError(const EraseObjectError&);
  EraseObjectError& operator=(const EraseObjectError&);
  EraseObjectError() : status(( ::dgi::DgiStatus::type)0), description() {
  }

  virtual ~EraseObjectError() throw();
  EraseObject erObject;
   ::dgi::DgiStatus::type status;
  std::string description;

  _EraseObjectError__isset __isset;

  void __set_erObject(const EraseObject& val);

  void __set_status(const  ::dgi::DgiStatus::type val);

  void __set_description(const std::string& val);

  bool operator == (const EraseObjectError & rhs) const
  {
    if (!(erObject == rhs.erObject))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(description == rhs.description))
      return false;
    return true;
  }
  bool operator != (const EraseObjectError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EraseObjectError & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EraseObjectError &a, EraseObjectError &b);

std::ostream& operator<<(std::ostream& out, const EraseObjectError& obj);

typedef struct _EraseResponse__isset {
  _EraseResponse__isset() : result(false), notErased(false) {}
  bool result :1;
  bool notErased :1;
} _EraseResponse__isset;

class EraseResponse : public virtual ::apache::thrift::TBase {
 public:

  EraseResponse(const EraseResponse&);
  EraseResponse& operator=(const EraseResponse&);
  EraseResponse() {
  }

  virtual ~EraseResponse() throw();
   ::dgi::DgiResult result;
  EraseErrorList notErased;

  _EraseResponse__isset __isset;

  void __set_result(const  ::dgi::DgiResult& val);

  void __set_notErased(const EraseErrorList& val);

  bool operator == (const EraseResponse & rhs) const
  {
    if (!(result == rhs.result))
      return false;
    if (!(notErased == rhs.notErased))
      return false;
    return true;
  }
  bool operator != (const EraseResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EraseResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EraseResponse &a, EraseResponse &b);

std::ostream& operator<<(std::ostream& out, const EraseResponse& obj);

} // namespace

#endif