/***********************************************************************
 * Generated by Hottentot CC Generator
 * Date: 05-05-2016 01:33:01
 * Name: transport_monitor_service.h
 * Description:
 *   This file contains definition of the interface used by proxies.
 ***********************************************************************/

#ifndef _ORG_LABCRYPTO_FENCE_TRANSPORT__PROXY__TRANSPORT_MONITOR_SERVICE_H_
#define _ORG_LABCRYPTO_FENCE_TRANSPORT__PROXY__TRANSPORT_MONITOR_SERVICE_H_

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

#include <org/labcrypto/hottentot/primitives.h>

#include "../enqueue_report.h"
#include "../transport_message.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace transport {
namespace proxy {
  class TransportMonitorService {
  public:
     TransportMonitorService() {}
     virtual ~TransportMonitorService() {}
  public:
    virtual void GetCurrentStat(
      ::org::labcrypto::hottentot::Utf8String &out
    ) = 0;
  };
} // END OF NAMESPACE proxy
} // END OF NAMESPACE transport
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org

#endif