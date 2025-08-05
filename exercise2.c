#include <stdio.h>

void drawRectangle(int height, int width, char fill, int isSolid) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (isSolid) {
                printf("%c ", fill);
            } else {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    printf("%c ", fill);
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    int a, b, f;
    char c;
    
    printf("请输入矩形高度(a): ");
    scanf("%d", &a);
    printf("请输入矩形宽度(b): ");
    scanf("%d", &b);
    printf("请输入填充字符(c): ");
    scanf(" %c", &c);
    printf("请输入填充模式(f, 0=空心 1=实心): ");
    scanf("%d", &f);
    
    drawRectangle(a, b, c, f);
    
    return 0;
}

