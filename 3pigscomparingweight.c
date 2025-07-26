#include <stdio.h>
int main () {
    int a, b, c;
    printf("请输入三只小猪体重\n");
    scanf("%d%d%d", &a ,&b , &c);
    if (a >b)
    {
        if (a > c)
            printf("最重的小猪体重是：%d\n", a);
        else
            printf("最重的小猪体重是：%d\n", c);
    }
    else
    {
        if (b > c)
            printf("最重的小猪体重是：%d\n", b);
        else
            printf("最重的小猪体重是：%d\n", c);
    }
}