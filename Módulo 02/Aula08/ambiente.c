#include <stdio.h>
void main() {
    int x = 5;
    int y = 3 + ++x;

    printf("Os valores sao %i e %i", x, y); // x = 6; y = 8;
}
