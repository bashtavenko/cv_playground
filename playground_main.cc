#include <gflags/gflags.h>
#include <glog/logging.h>
#include "absl/status/status.h"

int main(int argc, char** argv) {
  google::InitGoogleLogging(argv[0]);
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  LOG(INFO) << "Hello";
  return EXIT_SUCCESS;
}
