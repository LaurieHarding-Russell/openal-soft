cc_binary(
    name = "alplay",
    srcs = [
        "examples/alplay.c",
        "examples/common/alhelpers.c",
        "examples/common/alhelpers.h"
    ],
    deps = [
        "//:al",
    ],
    includes = [
        "//test/regression:data"
    ]
)

cc_library(
  name = "headers",
  hdrs = glob(["include/*.h"]),
  includes = ["include"],
  visibility = ["//visibility:public"]
)

# Windows
# cc_library(
#   name = "router",
#   srcs = [
#     "router/al.cpp",
#     "router/alc.cpp",
#     # "router/router.cpp",
#   ],
#   hdrs = [
#     "router/router.h",
#   ],
#   deps = [
#     "common",
#     "al",
#     "alc"
#   ],
#   visibility = ["//visibility:public"]
# )

cc_library(
    name = "common",
    srcs = glob(["version.h", "config.h", "common/*.c", "common/*.cpp"]),
    hdrs = glob(["common/*.h"]),
    includes = ["common"],
    deps = [
        "//:headers",
    ],
    visibility = ["//visibility:public"]
)
# FIXME, only works on linux.
cc_library(
    name = "al",
    srcs = glob(
        [
            "al/*.cpp", 
            "alc/*.cpp", 
            "alc/**/*.cpp"
        ],
        exclude = [
            "alc/backends/dsound.cpp",
            "alc/backends/jack.cpp",
            "alc/backends/winmm.cpp",
            "alc/backends/wasapi.cpp",
            "alc/backends/solaris.cpp",
            "alc/backends/portaudio.cpp",
            "alc/backends/sdl2.cpp",
            "alc/backends/sndio.cpp",
            "alc/backends/opensl.cpp",
            "alc/backends/oboe.cpp",
            "alc/backends/coreaudio.cpp",
            "alc/mixer/mixer_neon.cpp",
        ]
    ),
    hdrs = glob(
        [
            "al/*.h", 
            "alc/*.h", 
            "alc/**/*.h"
        ],
    ),
    deps = [
        "//:includes",
        "//:common",
    ],
    linkopts = [
        "-lsndfile",
        "-lpthread",
        "-lasound",
    ],
    includes = ["alc"],
    visibility = ["//visibility:public"]
)

cc_library(
    name = "includes",
    srcs = glob(["include/AL/*.h"]),
)

# cc_library(
#   name = "utils",
#   srcs = [
#     "utils",
#   ],
#   deps = [

#   ],
#   visibility = ["//visibility:public"]
# )