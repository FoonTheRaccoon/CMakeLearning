# Executable
file(GLOB_RECURSE SOURCES "*.cpp" "*.h" "*.hpp")
file(GLOB_RECURSE HEADERS "*.h" "*.hpp" ${LIB_HEADERS})


add_executable(testApp ${SOURCES})
target_include_directories(testApp PUBLIC ${HEADERS}) 
target_link_libraries(testApp testLib)