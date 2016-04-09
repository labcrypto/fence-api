#ifndef _NAEEM_GATE__CLIENT__BYTE_ARRAY_H_
#define _NAEEM_GATE__CLIENT__BYTE_ARRAY_H_

#include <stdint.h>

#include <iomanip>
#include <string>


namespace naeem {
namespace gate {
namespace client {
  class ByteArray {
  public:
    ByteArray()
      : data_(0),
        length_(0) {
    }
    ByteArray(unsigned char *data,
              uint32_t length)
      : data_(0),
        length_(0) {
      FromByteArray(data, length);
    }
    ByteArray(const ByteArray &byteArray)
      : data_(0),
        length_(0) {
      FromByteArray(byteArray.data_, byteArray.length_);
    }
    virtual ~ByteArray() {
      if (data_) {
        delete [] data_;
      }
    }
  public:
    inline void SetValue(unsigned char *data, 
                         uint32_t length) {
      FromByteArray(data, length);
    }
    inline unsigned char* GetValue() const {
      return data_;
    }
    inline uint32_t GetLength() const {
      return length_;
    }
  public:
    inline ByteArray& operator =(const ByteArray &other) {
      FromByteArray(other.data_, other.length_);
      return *this;
    }
    friend std::ostream& operator <<(std::ostream& out, const ByteArray& obj) {
      out << "BYTE ARRAY:" << std::endl;
      bool newLineInserted = false;
      for (uint32_t i = 0; i < obj.length_; i++) {
        newLineInserted = false;
        out << std::uppercase << std::hex << "0x" << 
          std::setw(2) << std::setfill ('0') << (unsigned int)(obj.data_[i]) << " ";
        if ((i + 1) % 8 == 0) {
          out << std::endl;
          newLineInserted = true;
        }
      }
      if (!newLineInserted) {
        out << std::endl;
      }
      out << std::dec;
      return out;
    }
  private:
    inline void FromByteArray(unsigned char *data,
                              uint32_t length) {
      if (length == 0) {
        if (data_) {
          delete [] data_;
        }
        data_ = 0;
        length_ = 0;
        return;
      }
      length_ = length;
      if (data_) {
        delete [] data_;
      }
      data_ = new unsigned char[length_];
      for (uint32_t i = 0; i < length_; i++) {
        data_[i] = data[i];
      }
    }
  private:
    unsigned char *data_;
    uint32_t length_;
  };
}
}
}

#endif