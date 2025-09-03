#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *n = (int *)malloc(sizeof(int)*10000);
    scanf("%d", n);
    int count = 0;

    for (int i = 1; i < *n + 1; i++)
    {
        if (*n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
        printf("素数");
    else 
        printf("不是素数");
}