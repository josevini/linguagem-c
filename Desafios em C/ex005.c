#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    short int n;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i", &n);
    printf("Analisando o valor %i, seu antecessor é %i e o sucessor é %i",
           n, (n - 1), (n + 1));
}
