
#include <stdio.h>
int main() {
    char ch1[] = "hello";
    char ch2[] = "world";
    char ch3[20]; // 声明足够大的数组
    int i = 0, j = 0;
    
    // 复制ch1到ch3
    while(ch1[i] != '\0'){
        ch3[i] = ch1[i];
        i++;
    }
    
    // 追加ch2到ch3
    while(ch2[j] != '\0'){
        ch3[i+j] = ch2[j];
        j++;
    }
    
    // 添加字符串结束符
    //ch3[i+j] = '\0';
    
    printf("ch3 = %s\n", ch3);
    return 0;
}