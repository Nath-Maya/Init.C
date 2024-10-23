#include <stdio.h>

int main() {
    int x = 1;
    int y = 3;

    // x += y
    x += y;
    printf("x += y: %d\n", x);

    // x += -y
    x += -y;
    printf("x += -y: %d\n", x);

    // x -= y
    x -= y;
    printf("x -= y: %d\n", x);

    // x -= -y
    x -= -y;
    printf("x -= -y: %d\n", x);

    return 0;
}
