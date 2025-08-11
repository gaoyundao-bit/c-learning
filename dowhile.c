#include <stdio.h>
int main() {
    int i = 100;
    do {
        int a = i%10;
        int b = (i/10)%10;
        int c = i/100;
        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d\n", i);
        }
        i++;
    }while (i <= 999);
    getchar();
}