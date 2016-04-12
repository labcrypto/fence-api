/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: gate_service_impl.cc
 * Description:
 *   This file contains empty implementation of sample stub.
 ******************************************************************/
 
#include <naeem/hottentot/runtime/configuration.h>
#include <naeem/hottentot/runtime/logger.h>
#include <naeem/hottentot/runtime/utils.h>

#include "gate_service_impl.h"

#include "../message.h"


namespace ir {
namespace ntnaeem {
namespace gate {
  void
  GateServiceImpl::OnInit() {
    // TODO: Called when service is initializing.
  }
  void
  GateServiceImpl::OnShutdown() {
    // TODO: Called when service is shutting down.
  }
  void
  GateServiceImpl::Enqueue(
      ::ir::ntnaeem::gate::Message &message, 
      ::naeem::hottentot::runtime::types::UInt64 &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::Enqueue() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::GetStatus(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::naeem::hottentot::runtime::types::UInt16 &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::GetStatus() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::Discard(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::Discard() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::HasMore(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::naeem::hottentot::runtime::types::Boolean &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::HasMore() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::PopNext(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::ir::ntnaeem::gate::Message &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::PopNext() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::Ack(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << 
        "[" << ::naeem::hottentot::runtime::Utils::GetCurrentUTCTimeString() << "]: " <<
          "GateServiceImpl::Ack() is called." << std::endl;
    }
    // TODO
  }
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir