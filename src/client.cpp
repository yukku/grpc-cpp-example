#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include "route_guide.grpc.pb.h"



class Client {

public:
    Client(std::shared_ptr<grpc::Channel> channel) : stub_(routeguide::RouteGuide::NewStub(channel)) {}

    std::string SendNumber(const std::int32_t& number) {
    	routeguide::Number request;
    	request.set_number(number);

    	routeguide::Number reply;

    	grpc::ClientContext context;

    	grpc::Status status = stub_->GetNumber(&context, request, &reply);


    	if (status.ok()) {
    		return std::to_string(reply.number());
    	} else {
    	    std::cout << status.error_code() << ": " << status.error_message()
    	                        << std::endl;
    	    return "RPC failed";
    	}
    }

private:
    std::unique_ptr<routeguide::RouteGuide::Stub> stub_;
};

int main(int argc, char** argv) {

    Client greeter(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    std::int32_t num = 12;
    std::string reply = greeter.SendNumber(num);
    std::cout << "RouteGuide received: " << reply << std::endl;

    return 0;
}
