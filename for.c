#include <stdio.h>
int main () {
    int i = 0;
    for(;;) {               //死循环
        printf("%d\n",i);
        i++;
    }
}