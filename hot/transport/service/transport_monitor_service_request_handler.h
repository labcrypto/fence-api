/***********************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: transport_monitor_service_request_handler.h
 * Description:
 *   This file contains definition of service's request handler class.
 ***********************************************************************/

#ifndef _IR_NTNAEEM_GATE_TRANSPORT__SERVICE__TRANSPORT_MONITOR_SERVICE_REQUEST_HANDLER_H_
#define _IR_NTNAEEM_GATE_TRANSPORT__SERVICE__TRANSPORT_MONITOR_SERVICE_REQUEST_HANDLER_H_

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

#include <naeem/hottentot/runtime/service/request_handler.h>


namespace ir {
namespace ntnaeem {
namespace gate {
namespace transport {
namespace service {
  class TransportMonitorServiceRequestHandler : public ::naeem::hottentot::runtime::service::RequestHandler {
  public:
    TransportMonitorServiceRequestHandler(::naeem::hottentot::runtime::service::Service *service)
      : ::naeem::hottentot::runtime::service::RequestHandler(service) {
    }
    virtual ~TransportMonitorServiceRequestHandler() {}
  public:
    virtual void HandleRequest(::naeem::hottentot::runtime::Request &request,
                                                   ::naeem::hottentot::runtime::Response &response);
  };
} // END OF NAMESPACE service
} // END OF NAMESPACE transport
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif