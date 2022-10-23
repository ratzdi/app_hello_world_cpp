cmake_minimum_required(VERSION 3.16)
project(app_hello_world_cpp VERSION 0.1.0 DESCRIPTION "The Hello World C++ application")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include(GNUInstallDirs)
find_package(hello_world_cpp CONFIG REQUIRED)
add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
        PRIVATE
        src/main.cpp
        )

target_link_libraries(${PROJECT_NAME} PRIVATE hello_world_cpp)