#include <stdio.h>
int main(){
    int a = 1;
    int b = 2;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("%d\n",a);
    printf("%d",b);


}