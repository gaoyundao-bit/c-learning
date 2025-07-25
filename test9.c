#include <stdio.h>
int main() {
    char a = 'a';
    printf("%pp\n",&a);
    printf("%s\n",&a);
    putchar(a);
    putchar(97);
    getchar();
}