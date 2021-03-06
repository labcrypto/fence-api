/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 07-05-2016 11:20:04
 * Name: transport_service.h
 * Description:
 *   This file contains definition of an abstract service class.
 ******************************************************************/

#ifndef _ORG_LABCRYPTO_FENCE_TRANSPORT__SERVICE__ABSTRACT_TRANSPORT_SERVICE_H_
#define _ORG_LABCRYPTO_FENCE_TRANSPORT__SERVICE__ABSTRACT_TRANSPORT_SERVICE_H_

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

#include <org/labcrypto/hottentot/runtime/service/service.h>

#include "../enqueue_report.h"
#include "../transport_message.h"

#include "transport_service.h"
#include "transport_service_request_handler.h"
#include "../enums.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace transport {
namespace service {
  class AbstractTransportService : public TransportService, public ::org::labcrypto::hottentot::runtime::service::Service {
  public:
    AbstractTransportService() {}
    virtual ~AbstractTransportService() {}
  public:
    inline virtual uint32_t GetServiceId() const {
      return 2012270607;
    }
  protected:
    inline virtual ::org::labcrypto::hottentot::runtime::service::RequestHandler* MakeRequestHandler() {
      return new TransportServiceRequestHandler(this);
    }
  };
} // END OF NAMESPACE service
} // END OF NAMESPACE transport
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org

#endif