#pragma once

#include <MessageOperation.grpc.pb.h>

class CMessagingServiceImpl final : public MessageService::Service
{
public:
	CMessagingServiceImpl() {};
	::grpc::Status Calculate(::grpc::ServerContext* context, const::MessageRequest* request, ::OperationResponse* response) override;
};
