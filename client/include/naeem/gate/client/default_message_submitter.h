#ifndef _NAEEM_GATE__CLIENT__DEFAULT_MESSAGE_SUBMITTER_H_
#define _NAEEM_GATE__CLIENT__DEFAULT_MESSAGE_SUBMITTER_H_

#include "message_submitter.h"
#include "submitter_thread.h"


namespace naeem {
namespace gate {
namespace client {
  class DefaultMessageSubmitter : public MessageSubmitter {
  public:
    DefaultMessageSubmitter (
      std::string gateHost,
      uint16_t gatePort,
      std::string enqueueLabel,
      std::string workDirPath
    ) : MessageSubmitter (
          gateHost, 
          gatePort, 
          enqueueLabel, 
          workDirPath
        ) {
    }
    virtual ~DefaultMessageSubmitter() {
    }
  public:
    virtual void 
    Init (
      int argc, 
      char **argv
    );
    virtual void Shutdown();
    virtual uint64_t 
    SubmitMessage (
      unsigned char *data, 
      uint32_t length
    );
    virtual uint64_t 
    ReplyMessage (
      uint64_t sourceMessageId,
      unsigned char *data, 
      uint32_t length
    );
  private:
    SubmitterThread *submitterThread_;
  };
}
}
}

#endif