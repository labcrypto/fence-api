#ifndef _ORG_LABCRYPTO__FENCE__CLIENT__DEFAULT_MESSAGE_RECEIVER_H_
#define _ORG_LABCRYPTO__FENCE__CLIENT__DEFAULT_MESSAGE_RECEIVER_H_

#include "message_receiver.h"
#include "receiver_thread.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace client {
  class DefaultMessageReceiver : public MessageReceiver {
  public:
    DefaultMessageReceiver (
      std::string gateHost,
      uint16_t gatePort,
      std::string popLabel,
      std::string workDirPath,
      uint32_t ackTimeout
    ) : MessageReceiver (
          gateHost, 
          gatePort, 
          popLabel, 
          workDirPath
        ),
        ackTimeout_(ackTimeout) {
    }
    virtual ~DefaultMessageReceiver() {
    }
  public:
    inline uint32_t GetAckTimeout() const {
      return ackTimeout_;
    }
  public:
    virtual void 
    Init (
      int argc, 
      char **argv
    );
    virtual void Shutdown();
    virtual std::vector<Message*>
    GetMessages ();
    virtual void
    Ack (
      std::vector<uint64_t> ids
    );
  private:
    uint32_t ackTimeout_;
    ReceiverThread *receiverThread_;
  };
}
}
}

#endif