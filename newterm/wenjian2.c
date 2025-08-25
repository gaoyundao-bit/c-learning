#include <stdio.h>


int main() {
    FILE *fp = fopen("D:/hello.txt", "r");
    
    char ch ;
    while((ch=fgetc(fp) )!= EOF){
   
        printf("%c", ch);
    }

   
    fclose(fp);

}
