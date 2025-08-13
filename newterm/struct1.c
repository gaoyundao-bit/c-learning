#include <stdio.h>
#include <string.h>  // 添加strcpy函数需要的头文件

struct student
{
    int score;
    char name[31];
    int age;
};

int main()
{
    struct student stu;
    stu.score = 100;
    strcpy(stu.name, "张三");  // 使用strcpy复制字符串
    stu.age = 18;
    printf("%s", stu.name);
    getchar();
    return 0;
}
