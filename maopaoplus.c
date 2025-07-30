#include <stdio.h>
#define SIZE 10

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int maxValue = findMax(arr, 10);
    printf("最大值为: %d\n", maxValue);
    return 0;
}

