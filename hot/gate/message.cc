/******************************************************************
 * Generated by Hottentot CC Generator
 * Date: 05-05-2016 01:33:01
 * Name: message.cc
 * Description:
 *   This file contains implementation of Message class.
 ******************************************************************/

#include <iostream>
#include <string.h>

#include <org/labcrypto/hottentot/runtime/hot_ptr.h>

#include "message.h"


namespace org {
namespace labcrypto {
namespace fence {
  Message::Message(const Message &other) {
    id_ = other.id_;
    relId_ = other.relId_;
    label_ = other.label_;
    content_ = other.content_;
  }
  Message::Message(Message *other) {
    id_ = other->id_;
    relId_ = other->relId_;
    label_ = other->label_;
    content_ = other->content_;
  }
  unsigned char *
  Message::Serialize(uint32_t *length_ptr) {
    uint32_t totalLength = 0;
    uint32_t length0 = 0;
    ::org::labcrypto::hottentot::runtime::HotPtr<unsigned char, true> ptr0;
    ptr0 = id_.Serialize(&length0);
    totalLength += length0;
    uint32_t length1 = 0;
    ::org::labcrypto::hottentot::runtime::HotPtr<unsigned char, true> ptr1;
    ptr1 = relId_.Serialize(&length1);
    totalLength += length1;
    uint32_t length2 = 0;
    ::org::labcrypto::hottentot::runtime::HotPtr<unsigned char, true> ptr2;
    ptr2 = label_.Serialize(&length2);
    if (length2 < 128) {
      totalLength += 1 + length2;
    } else if (length2 < 256) {
      totalLength += 2 + length2;
    } else if (length2 < 256 * 256) {
      totalLength += 3 + length2;
    } else if (length2 < 256 * 256 * 256) {
      totalLength += 4 + length2;
    }
    uint32_t length3 = 0;
    ::org::labcrypto::hottentot::runtime::HotPtr<unsigned char, true> ptr3;
    ptr3 = content_.Serialize(&length3);
    if (length3 < 128) {
      totalLength += 1 + length3;
    } else if (length3 < 256) {
      totalLength += 2 + length3;
    } else if (length3 < 256 * 256) {
      totalLength += 3 + length3;
    } else if (length3 < 256 * 256 * 256) {
      totalLength += 4 + length3;
    }
    unsigned char *data = new unsigned char[totalLength];
    uint32_t c = 0;
    unsigned char *data0 = ptr0.Get();
    for (uint32_t i = 0; i < length0; i++) {
      data[c++] = data0[i];
    }
    unsigned char *data1 = ptr1.Get();
    for (uint32_t i = 0; i < length1; i++) {
      data[c++] = data1[i];
    }
    if (length2 < 128) {
      data[c] = length2;
      c += 1;
    } else if (length2 < 256) {
      data[c] = 0x81;
      data[c + 1] = length2;
      c += 2;
    } else if (length2 < 256 * 256) {
      data[c] = 0x82;
      data[c + 1] = length2 / 256;
      data[c + 2] = length2 % 256;
      c += 3;
    } else if (length2 < 256 * 256 * 256) {
      data[c] = 0x83;
      data[c + 1] = length2 / (256 * 256);
      data[c + 2] = (length2 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length2 % (256 * 256);
      c += 4;
    }
    unsigned char *data2 = ptr2.Get();
    for (uint32_t i = 0; i < length2; i++) {
      data[c++] = data2[i];
    }
    if (length3 < 128) {
      data[c] = length3;
      c += 1;
    } else if (length3 < 256) {
      data[c] = 0x81;
      data[c + 1] = length3;
      c += 2;
    } else if (length3 < 256 * 256) {
      data[c] = 0x82;
      data[c + 1] = length3 / 256;
      data[c + 2] = length3 % 256;
      c += 3;
    } else if (length3 < 256 * 256 * 256) {
      data[c] = 0x83;
      data[c + 1] = length3 / (256 * 256);
      data[c + 2] = (length3 - data[c + 1] * (256 * 256)) / 256;
      data[c + 3] = length3 % (256 * 256);
      c += 4;
    }
    unsigned char *data3 = ptr3.Get();
    for (uint32_t i = 0; i < length3; i++) {
      data[c++] = data3[i];
    }
    if (c != totalLength) {
      std::cout << "Struct Serialization: Inconsistency in length of serialized byte array." << std::endl;
      exit(1);
    };
    if (length_ptr) {
      *length_ptr = totalLength;
    }
    return data;
  }
  void
  Message::Deserialize(unsigned char *data, uint32_t length) {
    uint32_t c = 0, elength = 0;
    id_.Deserialize(data + c, 8);
    c += 8;
    relId_.Deserialize(data + c, 8);
    c += 8;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      c++;
      if (ll == 1) {
        elength = data[c];
        c += 1;
      } else if (ll == 2) {
        elength = data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength = data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    label_.Deserialize(data + c, elength);
    c += elength;
    if ((data[c] & 0x80) == 0) {
      elength = data[c];
      c++;
    } else {
      uint8_t ll = data[c] & 0x0f;
      c++;
      if (ll == 1) {
        elength = data[c];
        c += 1;
      } else if (ll == 2) {
        elength = data[c] * 256 + data[c + 1];
        c += 2;
      } else if (ll == 3) {
        elength = data[c] * 256 * 256 + data[c + 1] * 256 + data[c + 2];
        c += 3;
      }
    }
    content_.Deserialize(data + c, elength);
    c += elength;
    if (c != length) {
      std::cout << "Struct Deserialization: Inconsistency in length of deserialized byte array." << std::endl;
      exit(1);
    };
  }
} // END OF NAMESPACE fence
} // END OF NAMESPACE labcrypto
} // END OF NAMESPACE org