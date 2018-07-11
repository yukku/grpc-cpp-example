
#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "route_guide.grpc.pb.h"

class GetNumberImpl final : public routeguide::RouteGuide::Service {
  grpc::Status GetNumber(grpc::ServerContext* context, const routeguide::Number* request,
                  routeguide::Number* reply) override {
    std::string prefix("Hello ");
    // reply->set_message(prefix + request->name());
    return grpc::Status::OK;
  }
};


void RunServer() {
  std::string server_address("0.0.0.0:50051");
  GetNumberImpl service;

  grpc::ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;

  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}


int main(int argc, char** argv) {
  RunServer();
  return 0;
}
