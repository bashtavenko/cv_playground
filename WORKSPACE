workspace(name = "cv_playground")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "bazel_skylib",
    sha256 = "1c531376ac7e5a180e0237938a2536de0c54d93f5c278634818e0efc952dd56c",
    type = "tar.gz",
    urls = [
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.0.3/bazel-skylib-1.0.3.tar.gz",
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.0.3/bazel-skylib-1.0.3.tar.gz",
    ],
)

# Allows to build non Bazel dependencies, like cmake.
http_archive(
    name = "rules_foreign_cc",
    sha256 = "e60cfd0a8426fa4f5fd2156e768493ca62b87d125cb35e94c44e79a3f0d8635f",
    strip_prefix = "rules_foreign_cc-0.2.0",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/0.2.0.zip",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

all_content = """\
filegroup(
    name = "all",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)
"""

http_archive(
    name = "opencv",
    build_file_content = all_content,
    sha256 = "cbf47ecc336d2bff36b0dcd7d6c179a9bb59e805136af6b9670ca944aef889bd",
    strip_prefix = "opencv-4.8.0",
    urls = ["https://github.com/opencv/opencv/archive/refs/tags/4.8.0.tar.gz"],
)

http_archive(
    name = "com_google_googletest",
    sha256 = "81964fe578e9bd7c94dfdb09c8e4d6e6759e19967e397dbea48d1c10e45d0df2",
    strip_prefix = "googletest-release-1.12.1",
    urls = [
        "https://github.com/google/googletest/archive/refs/tags/release-1.12.1.tar.gz",
    ],
)

http_archive(
    name = "com_google_absl",
    sha256 = "91ac87d30cc6d79f9ab974c51874a704de9c2647c40f6932597329a282217ba8",
    strip_prefix = "abseil-cpp-20220623.1",
    urls = [
        "https://github.com/abseil/abseil-cpp/archive/refs/tags/20220623.1.tar.gz",
    ],
)

http_archive(
    name = "com_github_gflags_gflags",
    sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
    strip_prefix = "gflags-2.2.2",
    urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
)

http_archive(
    name = "com_github_google_glog",
    sha256 = "8a83bf982f37bb70825df71a9709fa90ea9f4447fb3c099e1d720a439d88bad6",
    strip_prefix = "glog-0.6.0",
    urls = ["https://github.com/google/glog/archive/refs/tags/v0.6.0.tar.gz"],
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# buildifier is written in Go and hence needs rules_go to be built.
# See https://github.com/bazelbuild/rules_go for the up to date setup instructions.
http_archive(
    name = "io_bazel_rules_go",
    sha256 = "d6b2513456fe2229811da7eb67a444be7785f5323c6708b38d851d2b51e54d83",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_go/releases/download/v0.30.0/rules_go-v0.30.0.zip",
        "https://github.com/bazelbuild/rules_go/releases/download/v0.30.0/rules_go-v0.30.0.zip",
    ],
)

# https://github.com/bazelbuild/buildtools/tree/master/buildifier#readme
load("@io_bazel_rules_go//go:deps.bzl", "go_rules_dependencies")

go_rules_dependencies()

load("@io_bazel_rules_go//go:deps.bzl", "go_register_toolchains")

go_register_toolchains(version = "1.17.2")

http_archive(
    name = "bazel_gazelle",
    sha256 = "de69a09dc70417580aabf20a28619bb3ef60d038470c7cf8442fafcf627c21cb",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-gazelle/releases/download/v0.24.0/bazel-gazelle-v0.24.0.tar.gz",
        "https://github.com/bazelbuild/bazel-gazelle/releases/download/v0.24.0/bazel-gazelle-v0.24.0.tar.gz",
    ],
)

load("@bazel_gazelle//:deps.bzl", "gazelle_dependencies")

# If you use WORKSPACE.bazel, use the following line instead of the bare gazelle_dependencies():
# gazelle_dependencies(go_repository_default_config = "@//:WORKSPACE.bazel")
gazelle_dependencies()

# TODO(bashtavenko): The newer version of say 23.4 requires absl/log to compile.
# sha256 = "c29d8b4b79389463c546f98b15aa4391d4ed7ec459340c47bffe15db63eb9126"
# strip_prefix = "protobuf-23.4",
# "https://github.com/protocolbuffers/protobuf/archive/v23.4.tar.gz",
http_archive(
    name = "com_google_protobuf",
    sha256 = "c29d8b4b79389463c546f98b15aa4391d4ed7ec459340c47bffe15db63eb9126",
    strip_prefix = "protobuf-3.21.3",
    urls = [
        "https://github.com/protocolbuffers/protobuf/archive/v3.21.3.tar.gz",
    ],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()

http_archive(
    name = "com_github_bazelbuild_buildtools",
    sha256 = "ae34c344514e08c23e90da0e2d6cb700fcd28e80c02e23e4d5715dddcb42f7b3",
    strip_prefix = "buildtools-4.2.2",
    urls = [
        "https://github.com/bazelbuild/buildtools/archive/refs/tags/4.2.2.tar.gz",
    ],
)

# buildifier end
