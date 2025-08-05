#include <stdio.h>

int main()
{
    int m;

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // 判断是否为第一列、最后一列或对角线
            if (j == 0 || j == m - 1 || i == j)
            {
                printf("+ ");
            }
            else
            {
                printf("- ");
            }
        }
        printf("\n");
    }

    return 0;
}