/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 29-02-2016 01:23:46
 * Name: gate_service_impl.cc
 * Description:
 *   This file contains empty implementation of sample stub.
 ******************************************************************/
 
#include <naeem/hottentot/runtime/configuration.h>
#include <naeem/hottentot/runtime/logger.h>
#include <naeem/hottentot/runtime/utils.h>

#include "gate_service_impl.h"

#include "../message_status.h"
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
  GateServiceImpl::EnqueueMessage(
      ::ir::ntnaeem::gate::Message &message, 
      ::naeem::hottentot::runtime::types::UInt64 &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << "GateServiceImpl::EnqueueMessage() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::GetMessageStatus(
      ::naeem::hottentot::runtime::types::UInt64 &id, 
      ::ir::ntnaeem::gate::MessageStatus &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << "GateServiceImpl::GetMessageStatus() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::HasMoreMessage(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::naeem::hottentot::runtime::types::Boolean &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << "GateServiceImpl::HasMoreMessage() is called." << std::endl;
    }
    // TODO
  }
  void
  GateServiceImpl::NextMessage(
      ::naeem::hottentot::runtime::types::Utf8String &label, 
      ::ir::ntnaeem::gate::Message &out, 
      ::naeem::hottentot::runtime::service::HotContext &hotContext
  ) {
    if (::naeem::hottentot::runtime::Configuration::Verbose()) {
      ::naeem::hottentot::runtime::Logger::GetOut() << "GateServiceImpl::NextMessage() is called." << std::endl;
    }
    // TODO
  }
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir