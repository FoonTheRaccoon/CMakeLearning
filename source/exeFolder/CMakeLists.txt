# Executable
set(SOURCES
    main.cpp
    Stuff/FunctionHelpers.cpp
 )

 set(HEADERS
    Stuff/FunctionHelpers.h
 )


add_executable(testApp main.cpp ${SOURCES} ${HEADERS} ${LIB_HEADERS})
target_include_directories(testApp PUBLIC
    ../libFolder
    Stuff
)

target_link_libraries(testApp testLib)
