
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int arr[6] = {0};
    srand((unsigned int)time(NULL));
    

    for (int m = 0; m < 10; m++) {
            for (int i = 0; i < 6; i++) {
        int value;   
        value = rand() % 32 + 1;  
        for (int j = 0 ;j<i; j++) {
            if (value == arr[j]) {    
                break;
                }
            }
        
        
        arr[i] = value;
        printf("%d ", arr[i]);
    }
    printf("\n");
    }
    return 0;
}
