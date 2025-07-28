#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a = arr[1][1];
    printf("arr[1][2] = %d\n", a);
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%p\n",arr);
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
        }
    }
}