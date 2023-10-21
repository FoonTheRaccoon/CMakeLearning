# Library
file(GLOB LIB_SRC "*.cpp" "*.hpp" "*.h")
file(GLOB LIB_HEADERS "*.hpp" "*.h")
 
add_library(testLib INTERFACE ${LIB_SRC})
set_target_properties(testLib PROPERTIES LINKER_LANGUAGE CXX)
