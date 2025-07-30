#include <string.h>
#include <stdio.h>
int main() {
    int a = 10;
    int* p = &a;
    *p=20;
    printf("%p\n",p);
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",&p);
    printf("%d\n",*p);

    printf("%d\n",sizeof(int*));

}