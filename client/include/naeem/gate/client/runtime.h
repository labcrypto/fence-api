#ifndef _NAEEM_GATE__CLIENT__RUNTIME_H_
#define _NAEEM_GATE__CLIENT__RUNTIME_H_

#include <mutex>
#include <deque>
#include <map>
#include <unistd.h>


namespace naeem {
namespace gate {
namespace client {
  class Runtime {
  public:
    static void Init(std::string workDirPath, int agrc = 0, char **argv = NULL);
    static void Shutdown();
  public:

    static bool initialized_;
    static bool termSignal_;
    static bool submitterThreadTerminated_;
    static bool receiverThreadTerminated_;

    static std::mutex termSignalLock_;
    static std::mutex messageIdCounterLock_;
    static std::mutex mainLock_;

    static uint64_t messageIdCounter_;
    static std::deque<uint64_t> enqueued_;
    static std::map<std::string, std::deque<uint64_t>*> received_;
    static std::map<std::string, std::map<uint64_t, uint64_t>*> poppedButNotAcked_;
  };
}
}
}
#endif