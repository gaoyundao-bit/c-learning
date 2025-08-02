
#include <stdio.h>

void move(int *x, int *y) {
    (*x)--;
    (*y)++;
}

int main() {
    int x0 = 3;
    int y0 = 3;
    
    move(&x0, &y0);
    printf("%p\n",&x0);
    printf("%d\n",x0);


    printf("%d\n", y0);
    
    return 0;
}
