#include <stdio.h>
int Add(int m,int n)
{
    int z = 0;
    z = m + n;
    return z;
}
char ch1[] = "hello world1";
char ch2[] = "hello world";
int compare(char ch1[], char ch2[]){
    int i = 0;
    while (ch1[i]==ch2[i]){
        if(ch1[i] == '\0' ) {
            return 0;
        }
        i++;
    }
    return ch1[i]> ch2[i] ? 1 : -1;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int sum = Add(a,b);
    printf("和为%d\n", sum);
    int result = compare(ch1, ch2);
    if (result == 0) {
        printf("两个字符串相等\n");
    }
    else if (result > 0) {
        printf("第一个字符串大于第二个字符串\n");
    }
    else {
        printf("第一个字符串小于第二个字符串\n");
    }
    return 0;
}