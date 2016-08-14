cc_library(
    name = "src",
    srcs =  glob(["*.cc"]),
    visibility = ["//visibility:public"],
    deps = [
        "//src/gameboard",
        "//src/decision",
    ],
)

cc_binary(
    name = "exec",
    deps = [
        ":src",
    ],
)
