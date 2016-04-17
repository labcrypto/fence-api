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
    Runtime() {
      initialized_ = false;
    }
  public:
    void Init(std::string workDirPath, int agrc = 0, char **argv = NULL);
    void Shutdown();
  public:
    static void RegisterWorkDirPath(std::string workDirPath) {
      if (runtimes_.find(workDirPath) == runtimes_.end()) {
        runtimes_[workDirPath] = new Runtime();
      }
    }
    static Runtime* GetRuntime(std::string workDirPath) {
      if (runtimes_.find(workDirPath) == runtimes_.end()) {
        throw std::runtime_error(
          "Work dir path does not exist in the runtime map: '" + 
            workDirPath + "'");
      }
      return runtimes_[workDirPath];
    }
    static void Destroy() {
      for (std::map<std::string, Runtime*>::iterator it = runtimes_.begin();
         it != runtimes_.end();
        ) {
        delete it->second;
        runtimes_.erase(it++);
      }
    }
  public:
    bool initialized_;
    // static bool termSignal_;
    // static bool submitterThreadTerminated_;
    // static bool receiverThreadTerminated_;

    // static std::mutex termSignalLock_;
    std::mutex messageIdCounterLock_;
    std::mutex mainLock_;

    uint64_t messageIdCounter_;
    std::deque<uint64_t> enqueued_;
    std::map<std::string, std::deque<uint64_t>*> received_;
    std::map<std::string, std::map<uint64_t, uint64_t>*> poppedButNotAcked_;
  private:
    static std::map<std::string, Runtime*> runtimes_;
  };
}
}
}
#endif