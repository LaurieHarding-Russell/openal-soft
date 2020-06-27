cc_binary(
    name = "alplay",
    srcs = [
        "examples/alplay.c",
        "examples/common/alhelpers.c",
        "examples/common/alhelpers.h"
    ],
    deps = [
        "//:headers",
        "//:common",
        "//:al",
        "//:alc",
        # "//:router", windows only
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
    srcs = glob(["common/*.c"]),
    hdrs = glob(["common/*.h"]),
    visibility = ["//visibility:public"]
)

cc_library(
    name = "al",
    srcs = glob(["al/**/*.c"]),
    hdrs = glob(["al/**/*.h"]),
    visibility = ["//visibility:public"]
)

cc_library(
    name = "alc",
    srcs = glob(["alc/**/*.c"]),
    hdrs = glob(["alc/**/*.h"]),
    visibility = ["//visibility:public"]
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