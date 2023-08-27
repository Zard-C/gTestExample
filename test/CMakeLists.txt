cmake_minimum_required(VERSION 3.9)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}_test ${PROJECT_SOURCE_DIR}/test/Exampletest.cpp ${PROJECT_SOURCE_DIR}/src/Example.cpp)

target_link_libraries(${PROJECT_NAME}_test PUBLIC   
    gtest
    gtest_main #since we didn't define main in our test file
    pthread
)

