#ifndef _ORG_LABCRYPTO__FENCE__CLIENT__MESSAGE_RECEIVER_H_
#define _ORG_LABCRYPTO__FENCE__CLIENT__MESSAGE_RECEIVER_H_

#include <stdint.h>

#include <iomanip>
#include <string>

#include "message.h"
#include "runtime.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace client {
  class MessageReceiver {
  public:
    MessageReceiver (
      std::string gateHost,
      uint16_t gatePort,
      std::string popLabel,
      std::string workDirPath
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        popLabel_(popLabel),
        workDirPath_(workDirPath),
        runtime_(NULL) {
    }
    virtual ~MessageReceiver() {}
  public:
    inline uint16_t GetGatePort() const {
      return gatePort_;
    }
    inline std::string GetGateHost() {
      return gateHost_;
    }
    inline std::string GetPopLabel() {
      return popLabel_;
    }
    inline std::string GetWorkDirPath() {
      return workDirPath_;
    }
  public:
    virtual void 
    Init (
      int agrc = 0, 
      char **argv = NULL
    ) = 0;
    virtual void Shutdown() = 0;
    virtual std::vector<Message*>
    GetMessages () = 0;
    virtual void
    Ack (
      std::vector<uint64_t> ids
    ) = 0;
    virtual void
    Ack (
      uint64_t id
    ) {
      std::vector<uint64_t> ids;
      ids.push_back(id);
      Ack(ids);
    }
  protected:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string popLabel_;
    std::string workDirPath_;
    Runtime *runtime_;
  };
}
}
}
}

#endif