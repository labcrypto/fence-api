/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: gate_monitor_service_proxy_builder.cc
 * Description:
 *   This file contains implementation of the proxy builder class.
 ******************************************************************/

#include "gate_monitor_service_proxy_builder.h"
#include "gate_monitor_service_proxy.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace proxy {
  GateMonitorService*
  GateMonitorServiceProxyBuilder::Create(std::string host, uint32_t port) {
    return new GateMonitorServiceProxy(host, port);
  }
  void
  GateMonitorServiceProxyBuilder::Destroy(GateMonitorService *service) {
    delete service;
  }
} // END OF NAMESPACE proxy
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir