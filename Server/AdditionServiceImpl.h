#pragma once

#include <SumOperation.grpc.pb.h>

class AdditionServiceImpl : public SumOperationService::Service
{
public:
	AdditionServiceImpl() {};
	::grpc::Status Calculate(::grpc::ServerContext* context, const ::SumRequest* request, ::OperationResponse* response) override;
};

