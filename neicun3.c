#include <stdio.h>
int a;
// int main01() {
//     int abc;//局部变量未初始化
//     printf("%d\n",abc);//输出为随机
// }
int main () {
    printf("%d\n",a);//全局变量未初始化则输出值为零
}