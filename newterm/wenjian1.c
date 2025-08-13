#include <stdio.h>

int main() {
    FILE* fp = fopen("D:\\hello.txt", "w");
    
    if(fp == NULL) {
        printf("无法打开文件\n");
        return 1;
    }
    
    // 写入内容到文件
   // fprintf(fp, "Hello World");
    
    // 关闭文件
    //fclose(fp);
    
    printf("文件已成功写入\n",fp);
    getchar();
    return 0;
}
