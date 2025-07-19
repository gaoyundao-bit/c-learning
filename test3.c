#include<stdio.h>
int x = 0;
int main()
{
    scanf("%d", &x);
    if (x > 0)
        printf("Õý\n");
    else if (x < 0)
        printf("¸º\n");
    return 0;
}