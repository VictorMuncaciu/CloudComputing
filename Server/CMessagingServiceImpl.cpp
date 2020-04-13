#include "CMessagingServiceImpl.h"
#include <iostream>

::grpc::Status CMessagingServiceImpl::Calculate(::grpc::ServerContext* context, const::MessageRequest* request, ::OperationResponse* response)
{

	auto message = request->message();
	std::cout << "Client Name : " << message << " \n";

	return::grpc::Status::OK;
}
