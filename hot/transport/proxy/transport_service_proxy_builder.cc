/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 05-05-2016 01:33:01
 * Name: transport_service_proxy_builder.cc
 * Description:
 *   This file contains implementation of the proxy builder class.
 ******************************************************************/

#include "transport_service_proxy_builder.h"
#include "transport_service_proxy.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace transport {
namespace proxy {
  TransportService*
  TransportServiceProxyBuilder::Create(std::string host, uint32_t port) {
    return new TransportServiceProxy(host, port);
  }
  void
  TransportServiceProxyBuilder::Destroy(TransportService *service) {
    delete service;
  }
} // END OF NAMESPACE proxy
} // END OF NAMESPACE transport
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org