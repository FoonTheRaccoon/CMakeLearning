# Executable
set(SOURCES
    Stuff/FunctionHelpers.cpp
 )

 set(HEADERS
    Stuff/FunctionHelpers.h
 )


add_executable(testApp main.cpp)
target_sources(testApp PUBLIC 
    ${HEADERS} 
    ${SOURCES} 
    )

target_include_directories(testApp PUBLIC
    ../libFolder
    Stuff
)

target_link_libraries(testApp testLib)
