
#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "route_guide.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;


// using routeguide::Point;
// using routeguide::Feature;
// using routeguide::Rectangle;
// using routeguide::RouteSummary;
// using routeguide::RouteNote;
// using routeguide::RouteGuide;
// using std::chrono::system_clock;


// float ConvertToRadians(float num) {
//   return num * 3.1415926 /180;
// }

// // The formula is based on http://mathforum.org/library/drmath/view/51879.html
// float GetDistance(const Point& start, const Point& end) {
//   const float kCoordFactor = 10000000.0;
//   float lat_1 = start.latitude() / kCoordFactor;
//   float lat_2 = end.latitude() / kCoordFactor;
//   float lon_1 = start.longitude() / kCoordFactor;
//   float lon_2 = end.longitude() / kCoordFactor;
//   float lat_rad_1 = ConvertToRadians(lat_1);
//   float lat_rad_2 = ConvertToRadians(lat_2);
//   float delta_lat_rad = ConvertToRadians(lat_2-lat_1);
//   float delta_lon_rad = ConvertToRadians(lon_2-lon_1);

//   float a = pow(sin(delta_lat_rad/2), 2) + cos(lat_rad_1) * cos(lat_rad_2) *
//             pow(sin(delta_lon_rad/2), 2);
//   float c = 2 * atan2(sqrt(a), sqrt(1-a));
//   int R = 6371000; // metres

//   return R * c;
// }

// std::string GetFeatureName(const Point& point,
//                            const std::vector<Feature>& feature_list) {
//   for (const Feature& f : feature_list) {
//     if (f.location().latitude() == point.latitude() &&
//         f.location().longitude() == point.longitude()) {
//       return f.name();
//     }
//   }
//   return "";
// }

// class RouteGuideImpl final : public RouteGuide::Service {
//  public:

//   explicit RouteGuideImpl(const std::string& db) {
//     routeguide::ParseDb(db, &feature_list_);
//   }

//   Status GetFeature(ServerContext* context, const Point* point,
//                     Feature* feature) override {
//     feature->set_name(GetFeatureName(*point, feature_list_));
//     feature->mutable_location()->CopyFrom(*point);
//     return Status::OK;
//   }

//   Status ListFeatures(ServerContext* context,
//                       const routeguide::Rectangle* rectangle,
//                       ServerWriter<Feature>* writer) override {
//     auto lo = rectangle->lo();
//     auto hi = rectangle->hi();
//     long left = (std::min)(lo.longitude(), hi.longitude());
//     long right = (std::max)(lo.longitude(), hi.longitude());
//     long top = (std::max)(lo.latitude(), hi.latitude());
//     long bottom = (std::min)(lo.latitude(), hi.latitude());
//     for (const Feature& f : feature_list_) {
//       if (f.location().longitude() >= left &&
//           f.location().longitude() <= right &&
//           f.location().latitude() >= bottom &&
//           f.location().latitude() <= top) {
//         writer->Write(f);
//       }
//     }
//     return Status::OK;
//   }

//   Status RecordRoute(ServerContext* context, ServerReader<Point>* reader,
//                      RouteSummary* summary) override {
//     Point point;
//     int point_count = 0;
//     int feature_count = 0;
//     float distance = 0.0;
//     Point previous;

//     system_clock::time_point start_time = system_clock::now();
//     while (reader->Read(&point)) {
//       point_count++;
//       if (!GetFeatureName(point, feature_list_).empty()) {
//         feature_count++;
//       }
//       if (point_count != 1) {
//         distance += GetDistance(previous, point);
//       }
//       previous = point;
//     }
//     system_clock::time_point end_time = system_clock::now();
//     summary->set_point_count(point_count);
//     summary->set_feature_count(feature_count);
//     summary->set_distance(static_cast<long>(distance));
//     auto secs = std::chrono::duration_cast<std::chrono::seconds>(
//         end_time - start_time);
//     summary->set_elapsed_time(secs.count());

//     return Status::OK;
//   }

//   Status RouteChat(ServerContext* context,
//                    ServerReaderWriter<RouteNote, RouteNote>* stream) override {
//     std::vector<RouteNote> received_notes;
//     RouteNote note;
//     while (stream->Read(&note)) {
//       for (const RouteNote& n : received_notes) {
//         if (n.location().latitude() == note.location().latitude() &&
//             n.location().longitude() == note.location().longitude()) {
//           stream->Write(n);
//         }
//       }
//       received_notes.push_back(note);
//     }

//     return Status::OK;
//   }

//  private:

//   std::vector<Feature> feature_list_;
// };

class GetNumberImpl final : public routeguide::RouteGuide::Service {
  Status GetNumber(ServerContext* context, const routeguide::Number* request,
                  routeguide::Number* reply) override {
    std::string prefix("Hello ");
    // reply->set_message(prefix + request->name());
    return Status::OK;
  }
};


void RunServer() {
  std::string server_address("0.0.0.0:50051");
  GetNumberImpl service;

  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;

  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();
}


int main(int argc, char** argv) {
  RunServer();
  return 0;
}
