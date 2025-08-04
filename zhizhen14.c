#include <stdio.h> //去空格
void remove2(char *ch)
{
    char *ftemp = ch; // 用于遍历数组
    char *rtemp = ch; // 记录非空格字符串
    while (*ftemp)
    {
        if (*ftemp != ' ')
        {
            *rtemp = *ftemp;
            rtemp++;
        }
        ftemp++;
    }
    *rtemp = '\0';
}
int main()
{
    char ch[] = "he    llo wo   rld";
    remove2(ch);
    printf("%s",ch);
}