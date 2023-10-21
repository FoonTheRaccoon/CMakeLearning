# Executable

file(GLOB_RECURSE SOURCES "*.cpp" "*.h" "*.hpp" ${LIB_HEADERS})
add_executable(testApp main.cpp ${SOURCES})

# Grab all the sub folders to be included
#file(GLOB_RECURSE SUBDIRECTORIES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)
#target_include_directories(testApp PUBLIC ${SUBDIRECTORIES})

target_link_libraries(testApp testLib)
