#ifndef _NAEEM_GATE__CLIENT__GATE_CLIENT_H_
#define _NAEEM_GATE__CLIENT__GATE_CLIENT_H_

#include <stdint.h>
#include <string>


namespace naeem {
namespace gate {
namespace client {
  class GateClient {
  public:
    GateClient(std::string host, uint16_t port)
      : host_(host),
        port_(port) {
    }
    virtual ~GateClient() {
    }
  public:
    inline std::string GetHost() const {
      return host_;
    }
    inline uint16_t GetPort() const {
      return port_;
    }
  public:
    virtual void Init(int agrc = 0, char **argv = NULL) = 0;
    virtual void Shutdown() = 0;
    virtual uint64_t SubmitMessage(std::string label, unsigned char *data, uint32_t length) = 0;
  protected:
    std::string host_;
    uint16_t port_;
  };
}
}
}

#endif