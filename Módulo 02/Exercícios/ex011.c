#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &n);

    printf("O n�mero %d que voc� digitou � %s",
           n, (n % 2 == 0)?"PAR\n\n":"�MPAR\n\n");
}
