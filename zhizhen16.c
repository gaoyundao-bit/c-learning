#include <stdio.h>
char* find1(char* ch, char l){
    int i = 0;
    while(ch[i]){
        if(ch[i]==l){
            return &ch[i];
        }
        i++;
    }
    return NULL;
}

int main () {
    char* a = "hello,world";
    char* b = find1(a,'w');
    if(b == NULL){
        printf("未找到");
    }
    else{
        printf("%s",b);
    }
    return 0;
}
