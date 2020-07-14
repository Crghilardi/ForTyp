cmake_minimum_required(VERSION 3.15)
project(fortyp VERSION 1.0.0 LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

option (BUILD_DEMO "Build demo" ON)

if (BUILD_DEMO)
  add_subdirectory (demo)
endif()



