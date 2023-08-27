cmake_minimum_required(VERSION 3.9)

project(GtestExample)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# set complie warning
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function")

find_package(GTest REQUIRED)

include_directories(
        ${GTEST_INCLUDE_DIRS}
        include
)

add_executable(${PROJECT_NAME} src/main.cpp src/Example.cpp)
target_link_libraries(${PROJECT_NAME})

enable_testing()

add_subdirectory(test)


install(DIRECTORY include/ DESTINATION include)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

