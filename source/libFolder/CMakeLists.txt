# Library
set(LIB_SRC 
    )

set(LIB_HEADERS 
    libEntry.h
    )
 
add_library(testLib INTERFACE libEntry.h)
set_target_properties(testLib PROPERTIES LINKER_LANGUAGE CXX)