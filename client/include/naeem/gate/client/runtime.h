#ifndef _NAEEM_GATE__CLIENT__RUNTIME_H_
#define _NAEEM_GATE__CLIENT__RUNTIME_H_

#include <mutex>
#include <map>
#include <unistd.h>


namespace naeem {
namespace gate {
namespace client {
  class Runtime {
  public:
    static void Init(int agrc = 0, char **argv = NULL);
    static void Shutdown();
  public:

    static bool termSignal_;
    static bool submitterThreadTerminated_;

    static std::mutex termSignalLock_;
    static std::mutex messageIdCounterLock_;
    static std::mutex mainLock_;

    static uint64_t messageIdCounter_;
    static std::vector<uint64_t> waiting_;
  };
}
}
}
#endif