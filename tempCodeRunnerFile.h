#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = (int *)malloc(sizeof(arr));

    memcpy(p, arr, sizeof(arr));

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);
    getchar();
    return 0;
}
