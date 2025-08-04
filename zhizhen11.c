#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int a = 10;
    int b = 20;
    // 值传递,只传递值，本身不变
    //地址传递可改变实参的值
    swap(&a, &b);
    printf("%d\n",a);
    printf("%d\n",b);
}