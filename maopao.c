#include <stdio.h>
int temp = 0;
int main () {
    int arr[] = {9,1,5,7,2,10,8,4,6,3};
    for (int i = 0;i <10-1;i++){
        for (int j = 0;j < 10-i-1;j++){
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
           }
        }
    for (int a = 0;a < 10;a++){
        printf("%d\n", arr[a]);
    }
}