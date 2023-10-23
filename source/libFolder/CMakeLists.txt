# Library
add_library(testLib STATIC)
set_target_properties(testLib PROPERTIES LINKER_LANGUAGE CXX)

target_sources(testLib PUBLIC 
    libEntry.h
)

target_include_directories(testLib PUBLIC
    thirdParty/vulkan
)


find_library(Vulkan_LIBRARY NAMES vulkan-1 PATHS "${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/vulkan")

target_link_libraries(testLib ${Vulkan_LIBRARY})


