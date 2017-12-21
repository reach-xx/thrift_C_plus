/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Serv_H
#define Serv_H

#include <thrift/TDispatchProcessor.h>
#include "student_types.h"



class ServIf {
 public:
  virtual ~ServIf() {}
  virtual void put(const Student& s) = 0;
  virtual int32_t get() = 0;
  virtual void display(const Student& s) = 0;
};

class ServIfFactory {
 public:
  typedef ServIf Handler;

  virtual ~ServIfFactory() {}

  virtual ServIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ServIf* /* handler */) = 0;
};

class ServIfSingletonFactory : virtual public ServIfFactory {
 public:
  ServIfSingletonFactory(const boost::shared_ptr<ServIf>& iface) : iface_(iface) {}
  virtual ~ServIfSingletonFactory() {}

  virtual ServIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ServIf* /* handler */) {}

 protected:
  boost::shared_ptr<ServIf> iface_;
};

class ServNull : virtual public ServIf {
 public:
  virtual ~ServNull() {}
  void put(const Student& /* s */) {
    return;
  }
  int32_t get() {
    int32_t _return = 0;
    return _return;
  }
  void display(const Student& /* s */) {
    return;
  }
};

typedef struct _Serv_put_args__isset {
  _Serv_put_args__isset() : s(false) {}
  bool s :1;
} _Serv_put_args__isset;

class Serv_put_args {
 public:

  static const char* ascii_fingerprint; // = "FCCFA098BE1B9ADCAC2751457240D513";
  static const uint8_t binary_fingerprint[16]; // = {0xFC,0xCF,0xA0,0x98,0xBE,0x1B,0x9A,0xDC,0xAC,0x27,0x51,0x45,0x72,0x40,0xD5,0x13};

  Serv_put_args(const Serv_put_args&);
  Serv_put_args& operator=(const Serv_put_args&);
  Serv_put_args() {
  }

  virtual ~Serv_put_args() throw();
  Student s;

  _Serv_put_args__isset __isset;

  void __set_s(const Student& val);

  bool operator == (const Serv_put_args & rhs) const
  {
    if (!(s == rhs.s))
      return false;
    return true;
  }
  bool operator != (const Serv_put_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_put_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_put_args& obj);
};


class Serv_put_pargs {
 public:

  static const char* ascii_fingerprint; // = "FCCFA098BE1B9ADCAC2751457240D513";
  static const uint8_t binary_fingerprint[16]; // = {0xFC,0xCF,0xA0,0x98,0xBE,0x1B,0x9A,0xDC,0xAC,0x27,0x51,0x45,0x72,0x40,0xD5,0x13};


  virtual ~Serv_put_pargs() throw();
  const Student* s;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_put_pargs& obj);
};


class Serv_put_result {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  Serv_put_result(const Serv_put_result&);
  Serv_put_result& operator=(const Serv_put_result&);
  Serv_put_result() {
  }

  virtual ~Serv_put_result() throw();

  bool operator == (const Serv_put_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Serv_put_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_put_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_put_result& obj);
};


class Serv_put_presult {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~Serv_put_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const Serv_put_presult& obj);
};


class Serv_get_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  Serv_get_args(const Serv_get_args&);
  Serv_get_args& operator=(const Serv_get_args&);
  Serv_get_args() {
  }

  virtual ~Serv_get_args() throw();

  bool operator == (const Serv_get_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Serv_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_get_args& obj);
};


class Serv_get_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~Serv_get_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_get_pargs& obj);
};

typedef struct _Serv_get_result__isset {
  _Serv_get_result__isset() : success(false) {}
  bool success :1;
} _Serv_get_result__isset;

class Serv_get_result {
 public:

  static const char* ascii_fingerprint; // = "32183C4A04E706C58ED2F62566DDD8DE";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x18,0x3C,0x4A,0x04,0xE7,0x06,0xC5,0x8E,0xD2,0xF6,0x25,0x66,0xDD,0xD8,0xDE};

  Serv_get_result(const Serv_get_result&);
  Serv_get_result& operator=(const Serv_get_result&);
  Serv_get_result() : success(0) {
  }

  virtual ~Serv_get_result() throw();
  int32_t success;

  _Serv_get_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Serv_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Serv_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_get_result& obj);
};

typedef struct _Serv_get_presult__isset {
  _Serv_get_presult__isset() : success(false) {}
  bool success :1;
} _Serv_get_presult__isset;

class Serv_get_presult {
 public:

  static const char* ascii_fingerprint; // = "32183C4A04E706C58ED2F62566DDD8DE";
  static const uint8_t binary_fingerprint[16]; // = {0x32,0x18,0x3C,0x4A,0x04,0xE7,0x06,0xC5,0x8E,0xD2,0xF6,0x25,0x66,0xDD,0xD8,0xDE};


  virtual ~Serv_get_presult() throw();
  int32_t* success;

  _Serv_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const Serv_get_presult& obj);
};

typedef struct _Serv_display_args__isset {
  _Serv_display_args__isset() : s(false) {}
  bool s :1;
} _Serv_display_args__isset;

class Serv_display_args {
 public:

  static const char* ascii_fingerprint; // = "FCCFA098BE1B9ADCAC2751457240D513";
  static const uint8_t binary_fingerprint[16]; // = {0xFC,0xCF,0xA0,0x98,0xBE,0x1B,0x9A,0xDC,0xAC,0x27,0x51,0x45,0x72,0x40,0xD5,0x13};

  Serv_display_args(const Serv_display_args&);
  Serv_display_args& operator=(const Serv_display_args&);
  Serv_display_args() {
  }

  virtual ~Serv_display_args() throw();
  Student s;

  _Serv_display_args__isset __isset;

  void __set_s(const Student& val);

  bool operator == (const Serv_display_args & rhs) const
  {
    if (!(s == rhs.s))
      return false;
    return true;
  }
  bool operator != (const Serv_display_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_display_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_display_args& obj);
};


class Serv_display_pargs {
 public:

  static const char* ascii_fingerprint; // = "FCCFA098BE1B9ADCAC2751457240D513";
  static const uint8_t binary_fingerprint[16]; // = {0xFC,0xCF,0xA0,0x98,0xBE,0x1B,0x9A,0xDC,0xAC,0x27,0x51,0x45,0x72,0x40,0xD5,0x13};


  virtual ~Serv_display_pargs() throw();
  const Student* s;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_display_pargs& obj);
};


class Serv_display_result {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  Serv_display_result(const Serv_display_result&);
  Serv_display_result& operator=(const Serv_display_result&);
  Serv_display_result() {
  }

  virtual ~Serv_display_result() throw();

  bool operator == (const Serv_display_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Serv_display_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Serv_display_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Serv_display_result& obj);
};


class Serv_display_presult {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~Serv_display_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

  friend std::ostream& operator<<(std::ostream& out, const Serv_display_presult& obj);
};

class ServClient : virtual public ServIf {
 public:
  ServClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ServClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void put(const Student& s);
  void send_put(const Student& s);
  void recv_put();
  int32_t get();
  void send_get();
  int32_t recv_get();
  void display(const Student& s);
  void send_display(const Student& s);
  void recv_display();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ServProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ServIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ServProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_put(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_display(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ServProcessor(boost::shared_ptr<ServIf> iface) :
    iface_(iface) {
    processMap_["put"] = &ServProcessor::process_put;
    processMap_["get"] = &ServProcessor::process_get;
    processMap_["display"] = &ServProcessor::process_display;
  }

  virtual ~ServProcessor() {}
};

class ServProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ServProcessorFactory(const ::boost::shared_ptr< ServIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ServIfFactory > handlerFactory_;
};

class ServMultiface : virtual public ServIf {
 public:
  ServMultiface(std::vector<boost::shared_ptr<ServIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ServMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ServIf> > ifaces_;
  ServMultiface() {}
  void add(boost::shared_ptr<ServIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void put(const Student& s) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->put(s);
    }
    ifaces_[i]->put(s);
  }

  int32_t get() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get();
    }
    return ifaces_[i]->get();
  }

  void display(const Student& s) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->display(s);
    }
    ifaces_[i]->display(s);
  }

};



#endif
