#include <stdio.h>
//#include <windows.h>
void copy1(char* dest,char* ch){
    int i = 0;//相当于把指针当数组来用
    while (*(ch+i)){
        *(dest+i)=*(ch +i);
        i++;

    }
    *(dest+i)= '\0';
}
int main() {
    char ch[] = "hello world";
    char dest[100];
    copy1(dest, ch);
    printf("%s\n", dest); 
     // 使用%s格式打印字符串
     printf("%s",ch);
       return 0;
}
