/***********************************************************************
 * Generated by Hottentot CC Generator
 * Date: 05-05-2016 01:33:01
 * Name: transport_service.h
 * Description:
 *   This file contains definition of the interface used by proxies.
 ***********************************************************************/

#ifndef _ORG_LABCRYPTO_FENCE_TRANSPORT__PROXY__TRANSPORT_SERVICE_H_
#define _ORG_LABCRYPTO_FENCE_TRANSPORT__PROXY__TRANSPORT_SERVICE_H_

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
  class TransportService {
  public:
     TransportService() {}
     virtual ~TransportService() {}
  public:
    virtual void Transmit(
      ::org::labcrypto::hottentot::List< ::org::labcrypto::fence::transport::TransportMessage> &messages, 
      ::org::labcrypto::hottentot::List< ::org::labcrypto::fence::transport::EnqueueReport> &out
    ) = 0;
    virtual void Retrieve(
      ::org::labcrypto::hottentot::UInt32 &slaveId, 
      ::org::labcrypto::hottentot::List< ::org::labcrypto::fence::transport::TransportMessage> &out
    ) = 0;
    virtual void Ack(
      ::org::labcrypto::hottentot::List< ::org::labcrypto::hottentot::UInt64> &masterMIds
    ) = 0;
    virtual void GetStatus(
      ::org::labcrypto::hottentot::UInt64 &masterMId, 
      ::org::labcrypto::hottentot::UInt16 &out
    ) = 0;
  };
} // END OF NAMESPACE proxy
} // END OF NAMESPACE transport
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org

#endif