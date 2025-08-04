#include <stdio.h>
int main () {
    int a[] = {1,2,3};
    int b[] = {4,5,6};
    int c[] = {7,8,9};
    int* arr[] = {a,b,c};
    printf("%p\n",&arr[0]);
    int**p = arr;
    printf("%d\n",**(p+1));
    //二级指针加偏移量相当于跳过了一个一维数组
    printf("%d\n",*(*p+1));
    //一级指针加偏移量相当于跳过一个元素

}