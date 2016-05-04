#ifndef _ORG_LABCRYPTO__FENCE__CLIENT__SUBMITTER_THREAD_H_
#define _ORG_LABCRYPTO__FENCE__CLIENT__SUBMITTER_THREAD_H_

#include <string>
#include <mutex>

#include "runtime.h"


namespace org {
namespace labcrypto {
namespace fence {
namespace client {
  class SubmitterThread {
  public:
    SubmitterThread (
      std::string gateHost,
      uint16_t gatePort,
      std::string enqueueLabel,
      std::string workDirPath,
      Runtime *runtime
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        enqueueLabel_(enqueueLabel),
        workDirPath_(workDirPath),
        terminated_(false),
        threadTerminated_(false),
        runtime_(runtime) {
    }
    virtual ~SubmitterThread() {}
  public:
    virtual void Start();
    virtual void Shutdown();
    static void* ThreadBody(void *);
  private:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string enqueueLabel_;
    std::string workDirPath_;
    bool terminated_;
    bool threadTerminated_;
    std::mutex terminationLock_;
    Runtime *runtime_;
  };
}
}
}
}

#endif