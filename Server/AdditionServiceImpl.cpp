#include "AdditionServiceImpl.h"

::grpc::Status AdditionServiceImpl::Calculate(::grpc::ServerContext* context, const::SumRequest* request, ::OperationResponse* response)
{
	int sumResult = request->firstoperand() + request->secondoperand();
	response->set_result(sumResult);
	return ::grpc::Status::OK;
}
