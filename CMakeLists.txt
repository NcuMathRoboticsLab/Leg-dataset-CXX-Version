cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native")


project (leg_detection)

find_package(Python3 COMPONENTS Interpreter Development NumPy REQUIRED)

add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_include_directories(main
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${Python3_INCLUDE_DIRS}
)

target_link_libraries(main
    PUBLIC
        ${Python3_LIBRARIES}
        Python3::Python
        Python3::Module
        Python3::NumPy
)