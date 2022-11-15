load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def _com_google_googletest():
    http_archive(
        name = "com_google_googletest",
        urls = ["https://github.com/google/googletest/archive/a4ab0abb93620ce26efad9de9296b73b16e88588.tar.gz"],
        sha256 = "7897bfaa5ad39a479177cfb5c3ce010184dbaee22a7c3727b212282871918751",
        strip_prefix = "googletest-a4ab0abb93620ce26efad9de9296b73b16e88588",
    )
    native.bind(
        name = "gtest",
        actual = "@com_google_googletest//:gtest",
    )
    native.bind(
        name = "gtest_main",
        actual = "@com_google_googletest//:gtest_main",
    )

def load_dependencies():
    _com_google_googletest()
