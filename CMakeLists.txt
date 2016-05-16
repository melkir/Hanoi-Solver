cmake_minimum_required(VERSION 3.5)
project(Hanoi)

include_directories(header)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(SOURCE_FILES src/main.cpp src/tower.cpp header/tower.h src/disk.cpp header/disk.h src/hanoi.cpp header/hanoi.h)

add_executable(Hanoi ${SOURCE_FILES})