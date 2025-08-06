
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000

void sort(int arr[], int size) {
    int temp = 0;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("排序结果为: \n");
    for (int a = 0; a < size; a++) {
        printf("%d\n", arr[a]);
    }
}

int main() {
    srand((size_t)time(NULL));
    int *p = malloc(sizeof(int) * MAX);
    
    printf("随机生成的数组: \n");
    for (int i = 0; i < MAX; i++) {
        p[i] = rand() % 1000;
        printf("%d\n", p[i]);
    }
    
    sort(p, MAX);
    free(p);
    return 0;
}