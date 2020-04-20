#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float a = 5;
    a = a / 2;
    printf("O valor de a é %.1f", a);
}
