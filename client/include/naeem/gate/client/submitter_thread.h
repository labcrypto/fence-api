#ifndef _NAEEM_GATE__CLIENT__SUBMITTER_THREAD_H_
#define _NAEEM_GATE__CLIENT__SUBMITTER_THREAD_H_


namespace naeem {
namespace gate {
namespace client {
  class SubmitterThread {
  public:
    static void Start();
    static void* ThreadBody(void *);
  };
}
}
}
#endif