#include <stdio.h>
void copy(char* dest,char* ch){
    while(*dest++=*ch++);
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
