#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() {

    srand((size_t)time(NULL)); //添加随机数种子
    for (int i = 0; i < 10; i++) {
        int num = rand() % 51 +50; 
        printf("%d\n ", num);
    }    
}