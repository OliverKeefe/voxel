cmake_minimum_required(VERSION 3.20)
project(voxel)

set(CMAKE_CXX_STANDARD 23)

# Disable GLFW extras
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

# Find Vulkan SDK
find_package(Vulkan REQUIRED)

# Add GLFW (submodule)
add_subdirectory(third_party/glfw)

# Add executable
add_executable(voxel
        src/Main.cpp
        src/LveWindow.cpp
        src/EngineApp.cpp
        src/LvePipeline.cpp
)

# Include GLM (header-only)
target_include_directories(voxel PRIVATE third_party/glm)

# Include GLFW headers
target_include_directories(voxel PRIVATE third_party/glfw/include)

# Link GLFW and Vulkan
target_link_libraries(voxel glfw Vulkan::Vulkan)
