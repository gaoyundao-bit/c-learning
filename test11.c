#include <stdio.h>
#include <windows.h>
int main() {
    for (int a = 0 ;a<24;a++){
        for (int b = 0; b<60; b++){
            for (int c = 0; c<60; c++){
                system("cls");
                printf("%02d:%02d:%02d\n", a, b, c);
                Sleep(960); // 暂停1秒
        
            }
            }
    }
}