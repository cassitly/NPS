# Minimum CMake version required
cmake_minimum_required(VERSION 3.15)

# Project name and version
project(NPS VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify build output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/config
    ${PROJECT_SOURCE_DIR}/include/cmd
    ${PROJECT_SOURCE_DIR}/external/dependencies
)

# Add all source files
file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Create executable
add_executable(NPS ${SRC_FILES})

# Link external libraries (only necessary libraries, not headers)
target_include_directories(NPS PRIVATE
    ${PROJECT_SOURCE_DIR}/external/dependencies/nlohmann/json.hpp
)

# Add debug definitions and flags
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(NPS PRIVATE DEBUG)
    target_compile_options(NPS PRIVATE -g)
endif()

# Installation settings (optional)
install(TARGETS NPS DESTINATION bin)
install(DIRECTORY ${PROJECT_SOURCE_DIR}/resources DESTINATION .)
