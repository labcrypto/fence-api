#ifndef _NAEEM_GATE__CLIENT__MESSAGE_H_
#define _NAEEM_GATE__CLIENT__MESSAGE_H_

#include <stdint.h>

#include <iomanip>
#include <string>

#include "byte_array.h"


namespace naeem {
namespace gate {
namespace client {
  class Message {
  public:
    Message() {
    }
    Message(const Message &other) {
      id_ = other.id_;
      relId_ = other.relId_;
      label_ = other.label_;
      content_ = other.content_;
    }
    Message(Message *other) {
      id_ = other->id_;
      relId_ = other->relId_;
      label_ = other->label_;
      content_ = other->content_;
    }
    virtual ~Message() {}
  public:
    inline uint64_t GetId() const {
      return id_;
    }
    inline void SetId(uint64_t id) {
      id_ = id;
    }
    inline uint64_t GetRelId() const {
      return relId_;
    }
    inline void SetRelId(uint64_t relId) {
      relId_ = relId;
    }
    inline std::string GetLabel() const {
      return label_;
    }
    inline void SetLabel(std::string label) {
      label_ = label;
    }
    inline ByteArray GetContent() const {
      return content_;
    }
    inline void SetContent(ByteArray content) {
      content_ = content;
    }
  private:
    uint64_t id_;
    uint64_t relId_;
    std::string label_;
    ByteArray content_;
  };
}
}
}

#endif