package org.labcrypto.fence;

import java.util.*;


class GateImpl extends AbstractGateService {
  @Override
  public long enqueue(Message message) { 
    return null;
  }
  @Override
  public short getStatus(long id) { 
    return null;
  }
  @Override
  public void discard(long id) { 
  }
  @Override
  public boolean hasMore(String label) { 
    return null;
  }
  @Override
  public Message popNext(String label) { 
    return null;
  }
  @Override
  public void ack(long id) { 
  }
}