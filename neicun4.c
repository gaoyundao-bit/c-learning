#include <stdio.h>
#include <stdlib.h>
int main() {
    int*  p = malloc(9999999999);
    *p = 123;
    printf("%p\n",p);
    printf("%d",*p);
    free(p);//释放堆空间

}