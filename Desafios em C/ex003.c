#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, s;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite outro valor: ");
    scanf("%i", &n2);
    s = n1 + n2;
    printf("A soma entre %i e %i é igual a %i",
           n1, n2, s);
}
