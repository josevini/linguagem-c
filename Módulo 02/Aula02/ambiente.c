#include <stdio.h>

void main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    float t = (float)n / 3;

    printf("%.2f", t);
}
