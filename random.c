#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fun()
{
    srand((unsigned int)time(NULL));
    return rand() %36+1;

}
int main() {
    //srand((unsigned int)time(NULL));
    int a = fun();
    printf("%d\n",a);
}