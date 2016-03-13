/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 29-02-2016 01:23:46
 * Name: transport_service_proxy_builder.h
 * Description:
 *   This file contains definition of the proxy builder class.
 ******************************************************************/

#ifndef _IR_NTNAEEM_GATE_TRANSPORT__PROXY__TRANSPORT_SERVICE_PROXY_BUILDER_H_
#define _IR_NTNAEEM_GATE_TRANSPORT__PROXY__TRANSPORT_SERVICE_PROXY_BUILDER_H_

#ifdef _MSC_VER
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif

#include <string>


namespace ir {
namespace ntnaeem {
namespace gate {
namespace transport {
namespace proxy {
class TransportService;
  class TransportServiceProxyBuilder {
  public:
    static TransportService* Create(std::string /* host */, uint32_t /* port */);
    static void Destroy(TransportService *);
  };
} // END OF NAMESPACE proxy
} // END OF NAMESPACE transport
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif