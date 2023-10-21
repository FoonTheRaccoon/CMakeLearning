# Top Level Project
cmake_minimum_required(VERSION 3.20.0)
project(
	"CmakeLearning"
	VERSION 0.1.0
	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories("source/libFolder")
include_directories("source/exeFolder")

file(GLOB SOURCES *.cpp )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin/")

add_subdirectory("source/libFolder")
add_subdirectory("source/exeFolder")
