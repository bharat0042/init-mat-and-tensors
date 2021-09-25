cmake_minimum_required(VERSION 3.5)

project(init-sharkml LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Boost_DIR "C:/Dev/projects/libs/boost/lib-boost/lib/cmake/Boost-1.77.0")
set(Shark_DIR "C:/Dev/projects/libs/sharkml/shark-build")


find_package(Shark CONFIG REQUIRED)
find_package(Boost REQUIRED serialization)

add_executable(init-sharkml main.cpp)

include_directories("C:/Dev/projects/libs/sharkml/shark-build/include")
include_directories("C:/Dev/projects/libs/sharkml/Shark/include")
include_directories("C:/Dev/projects/libs/boost/lib-boost/include/boost-1_77")

target_link_libraries(init-sharkml
    "C:/Dev/projects/libs/boost/lib-boost/lib/libboost_serialization-vc141-mt-x64-1_77.lib"
    "C:/Dev/projects/libs/sharkml/shark-build/lib/Release/shark.lib"
)
