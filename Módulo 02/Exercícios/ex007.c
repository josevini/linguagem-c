#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n, d;
    float t;

    printf("Digite um número: ");
    scanf("%d", &n);

    d = n * 2;
    t = (float)n / 3;

    printf("Analisando o número %d, seu dobro é %d e a terça parte é %.2f", n, d, t);
}
