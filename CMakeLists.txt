set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH ./cmake)

cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(grpc-cpp-example VERSION 0.1.0 LANGUAGES CXX)

include(FindProtobuf)
find_package(Protobuf REQUIRED)

include(cmake/FindGRPC.cmake)
find_package(gRPC REQUIRED)

message(STATUS "Using Protobuf ${Protobuf_VERSION}")
message(STATUS "Using GRPC ${GRPC_VERSION}")

# Proto file
get_filename_component(hw_proto "src/route_guide.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)

# Generate grpc, cpp
execute_process(COMMAND protoc
    -I ./src --grpc_out=./src
    --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin
    ./src/route_guide.proto)

execute_process(COMMAND protoc
    -I ./src --cpp_out=./src
    ./src/route_guide.proto)

# Targets
add_executable(
    grpc-cpp-server
    src/main.cpp
    src/route_guide.pb.cc
    src/route_guide.grpc.pb.cc)

target_link_libraries(
    grpc-cpp-server
    grpc++_unsecure
    protobuf::libprotobuf)

