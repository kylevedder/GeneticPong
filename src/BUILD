cc_library(
    name = "src-lib",
    srcs =  glob(["*.cc"]),
    visibility = ["//visibility:public"],
    deps = [
        "//src/gameboard",
    ],
)

cc_binary(
    name = "main",
    deps = [
        ":src-lib",
    ],
)
