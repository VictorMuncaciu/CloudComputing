#include <iostream>
#include <SumOperation.grpc.pb.h>
#include <MessageOperation.grpc.pb.h>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

int main()
{
    grpc_init();
    ClientContext context;

    auto message_stub = MessageService::NewStub(grpc::CreateChannel("localhost:8888", grpc::InsecureChannelCredentials()));

    MessageRequest messageRequest;
    OperationResponse response;

    std::cout << "Name : ";

    std::string message;
    std::getline(std::cin, message);

    messageRequest.set_message(message);
    auto status = message_stub->Calculate(&context, messageRequest, &response);

    return 0;
}

