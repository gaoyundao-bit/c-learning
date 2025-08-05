#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
            printf(" ");

        for (int m = 0; m < 2 * i + 1; m++)
            printf("*");
        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = 0; j < n - i; j++)
            printf(" ");

        for (int m = 0; m < 2 * i + 1; m++)
            printf("*");
        printf("\n");
    }
    return 0;
}