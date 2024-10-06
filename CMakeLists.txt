# CMakeLists.txt

# Minimal version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(AttendanceSystem)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add all .cpp files in the src directory
file(GLOB SOURCES src/*.cpp)

# Specify the executable target
add_executable(attendance_system ${SOURCES} main.cpp)
