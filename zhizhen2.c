#include <stdio.h>
int main(void) {
    int a = 10;
    int* p = &a;
    int** pp = &p;
    **pp = 20;
    printf("%d\n",a);
    printf("%p\n",p);
}