all:
	mkdir -p bin
	mkdir -p lib
	mkdir -p lib/proxy
	mkdir -p lib/service
	mkdir -p lib/client
	mkdir -p lib/stub
	g++ -Wall -g -c -I/usr/local/include/hot message.cc -o lib/message.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_service_proxy.cc -o lib/proxy/fence_service_proxy.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_service_proxy_builder.cc -o lib/proxy/fence_service_proxy_builder.o
	g++ -Wall -g -c -I/usr/local/include/hot service/fence_service_request_handler.cc -o lib/service/fence_service_request_handler.o
	g++ -Wall -g -c -I/usr/local/include/hot client/fence_service_client.cc -o lib/client/fence_service_client.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o  lib/client/fence_service_client.o  -lhotd -lpthread -o bin/fence_service_client.out
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_service_impl.cc -o lib/stub/fence_service_impl.o
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_service_server.cc -o lib/stub/fence_service_server.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o  lib/stub/fence_service_impl.o lib/stub/fence_service_server.o  -lhotd -lpthread -o bin/fence_service_server.out
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_monitor_service_proxy.cc -o lib/proxy/fence_monitor_service_proxy.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_monitor_service_proxy_builder.cc -o lib/proxy/fence_monitor_service_proxy_builder.o
	g++ -Wall -g -c -I/usr/local/include/hot service/fence_monitor_service_request_handler.cc -o lib/service/fence_monitor_service_request_handler.o
	g++ -Wall -g -c -I/usr/local/include/hot client/fence_monitor_service_client.cc -o lib/client/fence_monitor_service_client.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o lib/proxy/fence_monitor_service_proxy.o lib/proxy/fence_monitor_service_proxy_builder.o lib/service/fence_monitor_service_request_handler.o  lib/client/fence_monitor_service_client.o  -lhotd -lpthread -o bin/fence_monitor_service_client.out
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_monitor_service_impl.cc -o lib/stub/fence_monitor_service_impl.o
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_monitor_service_server.cc -o lib/stub/fence_monitor_service_server.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o lib/proxy/fence_monitor_service_proxy.o lib/proxy/fence_monitor_service_proxy_builder.o lib/service/fence_monitor_service_request_handler.o  lib/stub/fence_monitor_service_impl.o lib/stub/fence_monitor_service_server.o  -lhotd -lpthread -o bin/fence_monitor_service_server.out
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_test_service_proxy.cc -o lib/proxy/fence_test_service_proxy.o
	g++ -Wall -g -c -I/usr/local/include/hot proxy/fence_test_service_proxy_builder.cc -o lib/proxy/fence_test_service_proxy_builder.o
	g++ -Wall -g -c -I/usr/local/include/hot service/fence_test_service_request_handler.cc -o lib/service/fence_test_service_request_handler.o
	g++ -Wall -g -c -I/usr/local/include/hot client/fence_test_service_client.cc -o lib/client/fence_test_service_client.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o lib/proxy/fence_monitor_service_proxy.o lib/proxy/fence_monitor_service_proxy_builder.o lib/service/fence_monitor_service_request_handler.o lib/proxy/fence_test_service_proxy.o lib/proxy/fence_test_service_proxy_builder.o lib/service/fence_test_service_request_handler.o  lib/client/fence_test_service_client.o  -lhotd -lpthread -o bin/fence_test_service_client.out
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_test_service_impl.cc -o lib/stub/fence_test_service_impl.o
	g++ -Wall -g -c -I/usr/local/include/hot stub/fence_test_service_server.cc -o lib/stub/fence_test_service_server.o
	g++ lib/message.o lib/proxy/fence_service_proxy.o lib/proxy/fence_service_proxy_builder.o lib/service/fence_service_request_handler.o lib/proxy/fence_monitor_service_proxy.o lib/proxy/fence_monitor_service_proxy_builder.o lib/service/fence_monitor_service_request_handler.o lib/proxy/fence_test_service_proxy.o lib/proxy/fence_test_service_proxy_builder.o lib/service/fence_test_service_request_handler.o  lib/stub/fence_test_service_impl.o lib/stub/fence_test_service_server.o  -lhotd -lpthread -o bin/fence_test_service_server.out
