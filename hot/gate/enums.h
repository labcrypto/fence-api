/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 13-04-2016 12:21:24
 * Name: enums.h
 * Description:
 *   This file contains all enumerations from all modules.
 ******************************************************************/

#ifndef _IR_NTNAEEM_GATE__ENUMS_H_
#define _IR_NTNAEEM_GATE__ENUMS_H_

namespace ir {
namespace ntnaeem {
namespace gate {
  enum MessageStatus {
    kMessageStatus___Unknown = 0,
    kMessageStatus___EnqueuedForTransmission = 100,
    kMessageStatus___Transmitted = 101,
    kMessageStatus___TransmissionFailed = 102,
    kMessageStatus___ReadyForPop = 103,
    kMessageStatus___PoppedButNotAcked = 104,
    kMessageStatus___PoppedAndAcked = 105
  };
} // END OF NAMESPACE gate
} // END OF NAMESPACE ntnaeem
} // END OF NAMESPACE ir

#endif