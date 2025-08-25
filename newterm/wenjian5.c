#include <stdio.h>


int main() {
    FILE *fp = fopen("D:/jiami.txt", "r");
    FILE *fp2= fopen("D:/jiemiwenjian.txt", "w");
    
    char ch ;
    while((ch=fgetc(fp) )!= EOF){
        ch--;
        fputc(ch,fp2);
        
    }

   
    fclose(fp);
    fclose(fp2);

}
