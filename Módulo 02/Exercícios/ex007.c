#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n, d;
    float t;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    d = n * 2;
    t = (float)n / 3;

    printf("Analisando o n�mero %d, seu dobro � %d e a ter�a parte � %.2f", n, d, t);
}
