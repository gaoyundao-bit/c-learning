#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    

    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("ÄæÖÃºó½á¹û: \n");
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d\n ", arr[i]);
    }
    
    return 0;
}
