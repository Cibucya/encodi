cmake_minimum_required(VERSION 3.16)

project(encodi)

# C++ standarts
set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED True)

# Debug flags for Clang
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

# Headers
include_directories(include)

# Sources
set(SOURCES
	src/main.cpp
	src/flags/helpers.cpp
	src/flags/flags_info.cpp
	src/flags/flag_parser.cpp
	src/credentials/account.cpp
	src/credentials/cli/account.cpp
)

# Executable
add_executable(${PROJECT_NAME} ${SOURCES})
