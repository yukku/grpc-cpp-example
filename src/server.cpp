#include <string>
#include <grpcpp/grpcpp.h>
#include "route_guide.grpc.pb.h"

class RouteGuideImpl final : public routeguide::RouteGuide::Service {

	grpc::Status GetNumber(grpc::ServerContext* context, const routeguide::Number* request,
	                  routeguide::Number* reply) override {
	    // std::string prefix("Hello ");
	    reply->set_number(100);
	    return grpc::Status::OK;
  	}

};

void RunServer() {

	std::string server_address("0.0.0.0:50051");
	RouteGuideImpl service;

	grpc::ServerBuilder builder;
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service);

	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
	std::cout << "Server listening on " << server_address << std::endl;

	server->Wait();
}


int main(int argc, char** argv) {
	RunServer();
	return 0;
}
