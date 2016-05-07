/******************************************************************
 * Generated by Hottentot JAVA Generator
 * Date: 
 * Name: 
 * Description:
 *   
 ******************************************************************/
package org.labcrypto.fence;

import java.util.List;

import org.labcrypto.hottentot.helper.*;
import org.labcrypto.hottentot.runtime.Argument;
import org.labcrypto.hottentot.runtime.Request;
import org.labcrypto.hottentot.runtime.RequestHandler;
import org.labcrypto.hottentot.runtime.Response;
import org.labcrypto.hottentot.runtime.Service;
import org.labcrypto.hottentot.runtime.config.Config;
import org.labcrypto.hottentot.runtime.exception.TcpClientConnectException;
import org.labcrypto.hottentot.runtime.exception.TcpClientReadException;
import org.labcrypto.hottentot.runtime.exception.TcpClientWriteException;


public class GateTestRequestHandler extends RequestHandler {
  public GateTestRequestHandler(Service service) {
    super(service);
  }
  @Override
  public Response handleRequest(Request request) throws TcpClientWriteException, TcpClientReadException, TcpClientConnectException {
    long methodId = request.getMethodId();
    GateTestService gateTestImpl = (AbstractGateTestService) service;
    if(methodId == 1300055394L){
      List <Argument> args = request.getArgs();
      Argument arg0 = args.get(0);
      byte[] serializedMessage = arg0.getData();
      Message message = new Message();
      message.deserialize(serializedMessage);
      Response response = new Response();
      long result = gateTestImpl.enqueueAsIncomingMessage(message);
      byte[] serializedResult = PDTSerializer.getUint64( result );
      response.setStatusCode((byte) 0);
      response.setData(serializedResult);
      response.setLength(serializedResult.length + 1);
      return response;
    }

    Response response = new Response();
    response.setStatusCode((byte) 255);
    response.setData(new byte[]{0});
    response.setLength(2);
    if(Config.isVerboseMode){
      System.out.println("WARN : method id is incorrect");
    }
    return response;
  }
}