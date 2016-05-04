#ifndef _ORG_LABCRYPTO__FENCE__CLIENT__MESSAGE_SUBMITTER_H_
#define _ORG_LABCRYPTO__FENCE__CLIENT__MESSAGE_SUBMITTER_H_

#include <stdint.h>

#include <iomanip>
#include <string>

#include "message.h"
#include "runtime.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace client {
  class MessageSubmitter {
  public:
    MessageSubmitter (
      std::string gateHost,
      uint16_t gatePort,
      std::string enqueueLabel,
      std::string workDirPath
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        enqueueLabel_(enqueueLabel),
        workDirPath_(workDirPath),
        runtime_(NULL) {
    }
    virtual ~MessageSubmitter() {}
  public:
    inline uint16_t GetGatePort() const {
      return gatePort_;
    }
    inline std::string GetGateHost() {
      return gateHost_;
    }
    inline std::string GetEnqueueLabel() {
      return enqueueLabel_;
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
    virtual uint64_t 
    SubmitMessage (
      unsigned char *data, 
      uint32_t length
    ) = 0;
    virtual uint64_t 
    ReplyMessage (
      uint64_t sourceMessageId,
      unsigned char *data, 
      uint32_t length
    ) = 0;
  protected:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string enqueueLabel_;
    std::string workDirPath_;
    Runtime *runtime_;
  };
}
}
}
}

#endif