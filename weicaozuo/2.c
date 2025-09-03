
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("请输入一个正整数: ");
    scanf("%d", &num);
    
    if(num <= 1) {
        printf("%d 不是素数\n", num);
        return 0;
    }
    
    int isPrime = 1;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    printf("%d %s素数\n", num, isPrime ? "是" : "不是");
    return 0;
}
