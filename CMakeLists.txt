cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
project(grpc-cpp-example VERSION 0.1.0 LANGUAGES CXX)
add_subdirectory(src)


set(CMAKE_MODULE_PATH ./cmake)

include(FindProtobuf)
include(cmake/FindGRPC.cmake)

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

message(STATUS "Using Protobuf ${Protobuf_VERSION}")
message(STATUS "Using GRPC ${GRPC_VERSION}")

# Proto file
# get_filename_component(hw_proto "../../protos/helloworld.proto" ABSOLUTE)
# get_filename_component(hw_proto_path "${hw_proto}" PATH)

