#ifndef FIX41_HEARTBEAT_H
#define FIX41_HEARTBEAT_H

#include "Message.h"

namespace FIX41
{

  class Heartbeat : public Message
  {
  public:
    Heartbeat() : Message(MsgType()) {}
    Heartbeat(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("0"); }

    FIELD_SET(*this, FIX::TestReqID);
  };

}

#endif
