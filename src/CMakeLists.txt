set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

file(GLOB SRCS "${SRC_DIR}/*.cpp")

add_library(md5 ${SRCS})