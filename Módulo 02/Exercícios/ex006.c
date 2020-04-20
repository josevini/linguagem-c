#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Analisando o número %d, o antecessor é %d e o sucessor é %d\n\n", n, (n-1), (n+1));
}
