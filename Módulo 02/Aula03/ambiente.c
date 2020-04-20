#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int a = 5;
    int b = 6;
    int c = (a <= b - 0);

    printf("O resultado é %d\n\n", c);
}
