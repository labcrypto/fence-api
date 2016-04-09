#ifndef _NAEEM_GATE__CLIENT__RECEIVER_THREAD_H_
#define _NAEEM_GATE__CLIENT__RECEIVER_THREAD_H_


namespace naeem {
namespace gate {
namespace client {
  class ReceiverThread {
  public:
    ReceiverThread (
      std::string gateHost,
      uint16_t gatePort,
      std::string popLabel,
      std::string workDirPath
    ) : gatePort_(gatePort),
        gateHost_(gateHost),
        popLabel_(popLabel),
        workDirPath_(workDirPath) {
    }
    virtual ~ReceiverThread() {}
  public:
    virtual void Start();
    static void* ThreadBody(void *);
  private:
    uint16_t gatePort_;
    std::string gateHost_;
    std::string popLabel_;
    std::string workDirPath_;
  };
}
}
}
#endif