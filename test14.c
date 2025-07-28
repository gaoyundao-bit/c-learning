#include <stdio.h>
#define SIZE 10
int main() {
    int arr[SIZE];
    
    
    // 输入10个值
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < SIZE; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf(" %d\n", max);
    return 0;
}
