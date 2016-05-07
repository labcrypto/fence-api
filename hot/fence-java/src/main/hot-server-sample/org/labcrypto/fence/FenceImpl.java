package org.labcrypto.fence;

import java.util.*;


class FenceImpl extends AbstractFenceService {
  @Override
  public long enqueue(Message message) { 
    return 0;
  }
  @Override
  public short getStatus(long id) { 
    return 0;
  }
  @Override
  public void discard(long id) { 
  }
  @Override
  public boolean hasMore(String label) { 
    return false;
  }
  @Override
  public Message popNext(String label) { 
    return null;
  }
  @Override
  public void ack(long id) { 
  }
}