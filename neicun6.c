#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    
    int* p = malloc(sizeof(int)*10);
    memset(p,1,40);
    for (int i = 0;i<10;i++){
        printf("%d\n",p[i]);
    }
    free(p);
}