#include <stdio.h> //数组名作为函数参数
void add(char *ch1, char *ch2)
{
    int i = 0;
    while (ch1[i] != '\0')//while (*ch1)ch1++
    {
        i++;
    }
    int j = 0;
    while (ch2[j] != '\0')
    {
        ch1[i + j] = ch2[j];
        j++;
    }
}
int main()
{
    char ch1[100] = "hello";
    char ch2[] = "world";
    add(ch1,ch2);
    printf("%s\n",ch1);
}
