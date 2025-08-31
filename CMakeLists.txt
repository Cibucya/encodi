cmake_minimum_required(VERSION 3.16)

project(encodi)

# C++ standarts
set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED True)

# Headers
include_directories(include)

# Sources
set(SOURCES
	src/main.cpp
	src/flag_parser.cpp
	src/credentials/account.cpp
	src/credentials/cli/account.cpp
)

# Executable
add_executable(${PROJECT_NAME} ${SOURCES})
