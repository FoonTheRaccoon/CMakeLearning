# Top Level Project
cmake_minimum_required(VERSION 3.20.0)
project(
	"CmakeLearning"
	VERSION 1.0.0
	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Clang specific stuff
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-switch-enum -Wno-nullability-completeness -Wno-unused-variable -Wno-unused-private-field -Wno-format-security" 
	)
endif()


#Send executables to top level bin folder
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

add_subdirectory("source/libFolder")
add_subdirectory("source/exeFolder")
