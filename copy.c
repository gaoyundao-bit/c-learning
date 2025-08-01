#include <stdio.h>

void copy(char* dest, char* ch) {
    int i = 0;
    while(ch[i]) {  // 移除多余的分号
        dest[i] = ch[i];
        i++;
    }
    dest[i] = '\0';  // 添加字符串结束符
}

int main() {
    char ch[] = "hello world";
    char dest[100];
    copy(dest, ch);
    printf("%s\n", dest); 
     // 使用%s格式打印字符串
     printf("%s",ch);
       return 0;
}
