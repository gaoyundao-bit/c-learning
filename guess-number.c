#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    int value = rand() % 100 ; // 生成1到100之间的随机数
    int num;
    
    for(;;) {
        scanf("%d", &num);
        if(value < num) {
            printf("高了!\n");
        } else if(value > num) {
            printf("低了!\n");
        } else {
            printf("猜对了!\n");
            break;
        }
    }
    return 0;
}