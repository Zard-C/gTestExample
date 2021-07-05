# 目标文件夹的构建规则

# 设置最低版本要求
cmake_minimum_required(VERSION 3.9)

# 定义This 变量， 值为 Example
set (This Example)

# 设置工程名为This 的值即Example
project(${This} C CXX)

# 指定语言标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
# 
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# 启用测试
enable_testing()

# 添加子目录
add_subdirectory(googletest)

# 要测试的文件头
set(Headers
    Example.hpp
)

# 要测试的源文件
set(Sources
    Example.cpp
)

# googletest 将源码生成的可执行文件作为库来链接 g_main 并执行
add_library(${This} STATIC ${Sources} ${Headers})

# 添加子文件夹 test 里面放的是测试代码
add_subdirectory(test)

