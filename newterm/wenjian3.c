#include <stdio.h>


int main() {
    FILE *fp = fopen("D:/hello.txt", "w");
    
    char ch = 'b';
    
    fputc(ch ,fp);
    //while((ch=fgetc(fp) )!= EOF){
   
        //printf("%c", ch);
   // }

   
    fclose(fp);

}
