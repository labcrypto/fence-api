#ifndef _NAEEM_GATE__CLIENT__RECEIVER_THREAD_H_
#define _NAEEM_GATE__CLIENT__RECEIVER_THREAD_H_

#include <string>
#include <mutex>

#include "runtime.h"


namespace naeem {
namespace gate {
namespace client {
  class ReceiverThread {
  public:
    ReceiverThread (
      std::string gateHost,
      uint16_t gatePort,
      std::string popLabel,
      std::string workDirPath,
      Runtime *runtime
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        popLabel_(popLabel),
        workDirPath_(workDirPath),
        terminated_(false),
        threadTerminated_(false),
        runtime_(runtime) {
    }
    virtual ~ReceiverThread() {}
  public:
    virtual void Start();
    virtual void Shutdown();
    static void* ThreadBody(void *);
  private:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string popLabel_;
    std::string workDirPath_;
    bool terminated_;
    bool threadTerminated_;
    std::mutex terminationLock_;
    Runtime *runtime_;
  };
}
}
}
#endif