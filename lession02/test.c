#include <stdio.h>

#define PI 3.14
/* 
gcc工作流程
    源代码--预处理器-->预处理后源代码--编译器-->汇编代码--汇编器-->目标代码--链接器-->可执行程序
    .h/.c/.cpp          .i                      .s                .o             .exe/.out
*/
int main() {

    int sum = PI + 10;

    printf("Hello World\n");

    return 0;
}