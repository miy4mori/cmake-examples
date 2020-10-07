project(exec)

# 表示向 exec 添加一个可执行文件
add_executable(${PROJECT_NAME} source/main.c)

# 表示程序需要链接库 sub::sub1 和 sub::sub2
target_link_libraries(${PROJECT_NAME}
        sub::sub1
        sub::sub2
        )