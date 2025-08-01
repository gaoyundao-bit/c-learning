#include <stdio.h>

void BubbleSort(int arr[], int len) {
    for(int i = 0; i < len-1; i++) {
        for(int j = 0; j < len-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9,1,5,6,3,8,10,2,7,4};
    BubbleSort(arr, 10);
    
    printf("排序后的数组: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
