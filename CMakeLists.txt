# 设置 CMake 最小版本
cmake_minimum_required(VERSION 3.17)
# 设置项目名称
project(test)
# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_TYPE Debug)

# 添加子目录
add_subdirectory(exec) # 可执行程序
add_subdirectory(sub1) # 函数库一
add_subdirectory(sub2) # 函数库二