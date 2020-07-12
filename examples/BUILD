# bazel run //examples:alplay -- ~/bla.wav
cc_binary(
    name = "alplay",
    srcs = [
        "alplay.c",
        "common/alhelpers.c",
        "common/alhelpers.h"
    ],
    deps = [
        "//:al",
    ],
    includes = [
        "//test/regression:data"
    ]
)

# bazel run //examples:alrecord -- -b 32 -r 16000 -t 5 -o ~/bla.wav
cc_binary(
    name = "alrecord",
    srcs = [
        "alrecord.c"
    ],
    deps = [
        "//:al",
        ":alhelpers"
    ],
    includes = [
        "//test/regression:data"
    ]
)

cc_binary(
    name = "alreverb",
    srcs = [
        "alreverb.c",
        "common/alhelpers.c",
        "common/alhelpers.h"
    ],
    deps = [
        "//:al",
    ],
    includes = [
        "//test/regression:data"
    ]
)

cc_library(
    name = "alhelpers",
    srcs = [
        "common/alhelpers.c",
        "common/alhelpers.h"
    ],
    visibility = ["//visibility:public"]
)