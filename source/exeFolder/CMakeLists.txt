# Executable
file(GLOB SOURCES "*.cpp" "*.h" "*.hpp")
file(GLOB HEADERS "*.h" "*.hpp" ${LIB_HEADERS})


add_executable(testApp ${SOURCES})
target_include_directories(testApp PUBLIC ${HEADERS})
target_link_libraries(testApp testLib)



