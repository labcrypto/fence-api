#ifndef _IR_NTNAEEM_GATE__CLIENT__SIMPLE_GATE_CLIENT_H_
#define _IR_NTNAEEM_GATE__CLIENT__SIMPLE_GATE_CLIENT_H_

#include "gate_client.h"


namespace ir {
namespace ntnaeem {
namespace gate {
namespace client {
  class SimpleGateClient : public GateClient {
  public:
    virtual void Init(int argc, char **argv);
    virtual void Destroy();
    virtual void SubmitMessage(std::string label, unsigned char *data, uint32_t length);
  };
}
}
}
}

#endif