#include <stdio.h>
int main () {
    int a[] ={1,2,3};
    int b[] ={4,5,6};
    int c[] ={7,8,9};
    int* arr[] = {a,b,c};
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",*(arr[i]+j));
        }
        printf("\n");
    }
    printf("%p\n",arr);
    printf("%p\n",arr[0]);
    printf("%p\n",&arr[0]); //arr的地址而不是arr的值，arr的值是数组a的地址
    return 0;
}
