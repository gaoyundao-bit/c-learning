#include <stdio.h>
void print()
{
    static int a = 10;
    //静态变量在数据区存储
    //静态变量只可初始化一次，可多次赋值
    a++;
    printf("%d\n", a);
}
int main()
{
    // static int a = 10;
    for(int i = 0;i<10;i++){
        print();
    }
}