cmake_minimum_required(VERSION 3.5)

project(ring-view)

enable_testing()

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # Ensures no compiler-specific extensions are used
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall -Wextra -pedantic -Werror")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall -Wextra -pedantic -Werror")

set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Catch2
find_package(Catch2 CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(examples)
