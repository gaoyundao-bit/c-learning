#include <stdio.h>
int main()
{
    const int a=9;
    #define b 8
    printf("%d%d",a,b);

    return 0;
}