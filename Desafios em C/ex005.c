#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    short int n;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &n);
    printf("Analisando o valor %i, seu antecessor � %i e o sucessor � %i",
           n, (n - 1), (n + 1));
}
