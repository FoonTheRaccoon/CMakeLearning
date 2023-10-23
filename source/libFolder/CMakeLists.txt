# Library
add_library(testLib STATIC)
set_target_properties(testLib PROPERTIES LINKER_LANGUAGE CXX)

target_sources(testLib PUBLIC 
    libEntry.h
)

target_include_directories(testLib PUBLIC
    thirdParty
    thirdParty/vulkan
    thirdParty/glm
)

# Vulkan
find_library(Vulkan_LIBRARY NAMES vulkan-1 PATHS "${CMAKE_CURRENT_SOURCE_DIR}/thirdParty/vulkan")
target_link_libraries(testLib ${Vulkan_LIBRARY})

# GLM
add_subdirectory(thirdParty/glm)
target_link_libraries(testLib glm)





