#include <stdio.h> //去空格
void remove1(char *ch)
{
    char str[100] = {0};
    int i = 0;
    int j = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] != ' ')
        {
            str[j] = ch[i];
            j++;
        }
        i++;
    }
    printf("%s\n", str);
}
int main()
{
    char ch[] = "he    llo wo   rd";
    remove1(ch);
}