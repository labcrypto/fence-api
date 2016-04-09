#ifndef _NAEEM_GATE__CLIENT__SUBMITTER_THREAD_H_
#define _NAEEM_GATE__CLIENT__SUBMITTER_THREAD_H_


namespace naeem {
namespace gate {
namespace client {
  class SubmitterThread {
  public:
    SubmitterThread (
      std::string gateHost,
      uint16_t gatePort,
      std::string enqueueLabel,
      std::string workDirPath
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        enqueueLabel_(enqueueLabel),
        workDirPath_(workDirPath) {
    }
    virtual ~SubmitterThread() {}
  public:
    virtual void Start();
    static void* ThreadBody(void *);
  private:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string enqueueLabel_;
    std::string workDirPath_;
  };
}
}
}
#endif