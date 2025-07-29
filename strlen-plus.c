#include <stdio.h>
int main () {
    int len = 0 ;
    char cha[] = "Hello, World!";
    while (cha[len] != '\0') {
        len++;
    }
    printf("%d", len);
    return 0;
}