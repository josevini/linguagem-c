#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    printf("Analisando o n�mero %d, o antecessor � %d e o sucessor � %d\n\n", n, (n-1), (n+1));
}
