#include <iostream>
#include "CMessagingServiceImpl.h"

#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>

int main()
{
    std::string server_adress("localhost:8888");
    CMessagingServiceImpl service;

    ::grpc_impl::ServerBuilder serverBuilder;
    serverBuilder.AddListeningPort(server_adress, grpc::InsecureServerCredentials());
    serverBuilder.RegisterService(&service);
    std::unique_ptr<::grpc_impl::Server> server(serverBuilder.BuildAndStart());
    std::cout << "Server listening on " << server_adress << std::endl;
    server->Wait();


}

