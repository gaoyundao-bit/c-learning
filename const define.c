#include <stdio.h>
int main()
{
    const int a=9;
    #define b 8//define不分配内存直接替换
    printf("%d%d",a,b);

    return 0;
}