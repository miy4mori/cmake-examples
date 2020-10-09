//
// Created by miy4mori on 2020/10/7.
//

#include "stdio.h"

#include "sub1.h"
#include "sub2.c"

#include "strings.c"

/**
 * 主程序
 * @return Always Zero
 */
int main() {
    // 调用含有头文件的函数
    sub1();
    // 分割线
    printf("%s;\n", "=====");
    // 调用不含头文件的函数
    sub2();
    // 分割线
    printf("%s;\n", "=====");
    // 调用同项目下不含头文件的函数
    echo();
    return 0;
}