
#include <stdio.h>
#include <string.h>//查找字符串


// 查找字符串函数
char* find_string(char* str, char* substr) {
    return strstr(str, substr);
}

int main() {
    char main_str[100];
    char search_str[100];
    
    printf("请输入主字符串: ");
    fgets(main_str, sizeof(main_str), stdin);
    main_str[strcspn(main_str, "\n")] = '\0'; // 移除换行符
    
    printf("请输入要查找的子字符串: ");
    fgets(search_str, sizeof(search_str), stdin);
    search_str[strcspn(search_str, "\n")] = '\0'; // 移除换行符
    
    char* result = find_string(main_str, search_str);
    
    if (result != NULL) {
        printf("找到子字符串，位置在: %d\n", result - main_str);
    } else {
        printf("未找到子字符串\n");
    }
    
    return 0;
}

