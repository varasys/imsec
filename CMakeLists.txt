cmake_minimum_required(VERSION 3.17.3 FATAL_ERROR)

project(imsec VERSION 0.0.1)

configure_file(ImsecConfig.h.in ImsecConfig.h)

add_executable(imsec src/imsec.c)

target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
