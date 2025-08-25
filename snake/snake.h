#pragma once
#define wide 20
#define high 60
struct BODY {
    int x;
    int y;
};
struct snake {
    int size;
    struct BODY body[wide*high];
}snake;
