#ifndef _NAEEM_GATE__CLIENT__GATE_CLIENT_H_
#define _NAEEM_GATE__CLIENT__GATE_CLIENT_H_

#include <stdint.h>
#include <string>


namespace naeem {
namespace gate {
namespace client {
  class GateClient {
  public:
    GateClient() {}
    virtual ~GateClient() {}
  public:
    virtual void Init(int agrc = 0, char **argv = NULL) = 0;
    virtual void Shutdown() = 0;
    virtual void SubmitMessage(std::string label, unsigned char *data, uint32_t length) = 0;
  };
}
}
}

#endif