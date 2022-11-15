cc_library(
    name = "aoc_lib",
    srcs = ["aoc.cc"],
    hdrs = ["aoc.h"],
    visibility = ["//visibility:public"],
)
cc_binary(
    name = "aoc_bin",
    srcs = ["main.cc"],
    deps = [":aoc_lib"],
    visibility = ["//visibility:public"],
)
