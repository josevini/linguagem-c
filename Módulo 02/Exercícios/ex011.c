#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &n);

    printf("O número %d que você digitou é %s",
           n, (n % 2 == 0)?"PAR\n\n":"ÍMPAR\n\n");
}
