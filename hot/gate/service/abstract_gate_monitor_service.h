/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: gate_monitor_service.h
 * Description:
 *   This file contains definition of an abstract service class.
 ******************************************************************/

#ifndef _IR_NTNAEEM_GATE__SERVICE__ABSTRACT_GATE_MONITOR_SERVICE_H_
#define _IR_NTNAEEM_GATE__SERVICE__ABSTRACT_GATE_MONITOR_SERVICE_H_

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

#include <naeem/hottentot/runtime/service/service.h>

#include "../message.h"

#include "gate_monitor_service.h"
#include "gate_monitor_service_request_handler.h"
#include "../enums.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace service {
  class AbstractGateMonitorService : public GateMonitorService, public ::naeem::hottentot::runtime::service::Service {
  public:
    AbstractGateMonitorService() {}
    virtual ~AbstractGateMonitorService() {}
  public:
    inline virtual uint32_t GetServiceId() const {
      return 3344047614;
    }
  protected:
    inline virtual ::naeem::hottentot::runtime::service::RequestHandler* MakeRequestHandler() {
      return new GateMonitorServiceRequestHandler(this);
    }
  };
} // END OF NAMESPACE service
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif