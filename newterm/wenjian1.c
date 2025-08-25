#include <stdio.h>


int main() {
    FILE* fp = fopen("D:\\hello.txt", "r");
    
    if(fp == NULL) {
        printf("失败\n");
        return -1;
    }
    printf("ok%p",fp);
    // 读取文件内容
    //int ch;
    //while((ch = fgetc(fp)) != EOF) {
        //putchar(ch);
    //}
    
    // 检查是否正常结束
    //if(ferror(fp)) {
        //fprintf(stderr, "文件读取错误\n");
    //}
    
    fclose(fp);
    return 0;
}
