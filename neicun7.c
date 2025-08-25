#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>  // 显式包含标准库头文件（C11推荐做法）

int main(void) {  // 显式声明无参数
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = (int *)malloc(sizeof(arr));
    
    if (p == NULL) {  // 内存分配检查（C11强调安全性）
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }

    memcpy(p, arr, sizeof(arr));
    
    for (int i = 0; i < 10; i++) {  // 移除外部重复声明的i变量
        printf("%d\n", p[i]);
    }

    free(p);
    getchar();
    return EXIT_SUCCESS;  // 使用标准退出码（C11推荐）
}

