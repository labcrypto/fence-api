/***************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: transport_message.h
 * Description:
 *   This file contains definition of TransportMessage class.
 ***************************************************************/

#ifndef _IR_NTNAEEM_GATE_TRANSPORT__TRANSPORT_MESSAGE_H_
#define _IR_NTNAEEM_GATE_TRANSPORT__TRANSPORT_MESSAGE_H_

#include <string>

#include <naeem/hottentot/runtime/types/primitives.h>
#include <naeem/hottentot/runtime/serializable.h>


#include "enums.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace transport {
  class TransportMessage : public ::naeem::hottentot::runtime::Serializable {
  public:
    TransportMessage() {
    }
    TransportMessage(const TransportMessage &);
    TransportMessage(TransportMessage *);
    virtual ~TransportMessage() {}
  public:
    inline ::naeem::hottentot::runtime::types::UInt64 GetMasterMId() const {
      return masterMId_;
    }
    inline void SetMasterMId(::naeem::hottentot::runtime::types::UInt64 masterMId) {
      masterMId_ = masterMId;
    }
    inline ::naeem::hottentot::runtime::types::UInt32 GetSlaveId() const {
      return slaveId_;
    }
    inline void SetSlaveId(::naeem::hottentot::runtime::types::UInt32 slaveId) {
      slaveId_ = slaveId;
    }
    inline ::naeem::hottentot::runtime::types::UInt64 GetSlaveMId() const {
      return slaveMId_;
    }
    inline void SetSlaveMId(::naeem::hottentot::runtime::types::UInt64 slaveMId) {
      slaveMId_ = slaveMId;
    }
    inline ::naeem::hottentot::runtime::types::UInt64 GetRelMId() const {
      return relMId_;
    }
    inline void SetRelMId(::naeem::hottentot::runtime::types::UInt64 relMId) {
      relMId_ = relMId;
    }
    inline ::naeem::hottentot::runtime::types::Utf8String GetLabel() const {
      return label_;
    }
    inline void SetLabel(::naeem::hottentot::runtime::types::Utf8String label) {
      label_ = label;
    }
    inline ::naeem::hottentot::runtime::types::ByteArray GetContent() const {
      return content_;
    }
    inline void SetContent(::naeem::hottentot::runtime::types::ByteArray content) {
      content_ = content;
    }
  public:
    virtual unsigned char * Serialize(uint32_t * /* Pointer to length */);
    virtual void Deserialize(unsigned char * /* Data */, uint32_t /* Data length */);
  private:
    ::naeem::hottentot::runtime::types::UInt64 masterMId_;
    ::naeem::hottentot::runtime::types::UInt32 slaveId_;
    ::naeem::hottentot::runtime::types::UInt64 slaveMId_;
    ::naeem::hottentot::runtime::types::UInt64 relMId_;
    ::naeem::hottentot::runtime::types::Utf8String label_;
    ::naeem::hottentot::runtime::types::ByteArray content_;
  };
} // END OF NAMESPACE transport
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif