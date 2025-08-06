#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = NULL;
    char *p = (char *)malloc(40);

    *p = 99;  // 设置第一个字节的值

    // 为a分配相同大小的内存
    a = (char *)malloc(40);

    memcpy(a, p, 40);
    printf("%d\n", *a);  // 打印第一个字节的值

    // 释放内存
    free(p);
    free(a);

    return 0;
}