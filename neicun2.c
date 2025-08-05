#include <stdio.h>
//全局静态变量可以赋值变动
static int a = 10;
int main () {
    a= 19;
    printf("%d",a);
}