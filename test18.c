
#include <stdio.h>

int main() {
    int arr[5][3];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\n");
    for (int i = 0; i < 3; i++) {
        int sum = 0;  // 每列计算前重置sum
        for (int j = 0; j < 5; j++) {
            sum += arr[j][i];
        }
        printf("ƽ����: %.2f\n", i + 1, (float)sum / 5);
    }
    return 0;
}
