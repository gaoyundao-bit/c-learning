#include <stdio.h>
int main1() {
    char ch[10];
    fgets(ch, sizeof(ch), stdin);
    printf("%s", ch);
    return 0;

}
int main2() {
    puts("Hello, World!");
}
int main() {
    char ch[10] = "Hello";
    fputs(ch,stdout);
}