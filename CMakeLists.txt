cmake_minimum_required(VERSION 3.14)
project(CPlusPlusKoans)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Download and configure Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Include Google Test's CMake functions
include(GoogleTest)

# Add subdirectories for each koan category
add_subdirectory(koans/1_1_translation_units)
add_subdirectory(koans/1_2_names_scopes)
add_subdirectory(koans/1_3_basic_types)
add_subdirectory(koans/1_4_pointers_arrays)
