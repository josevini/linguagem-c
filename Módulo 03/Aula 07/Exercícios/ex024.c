#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("<<< EX024 - Ordem em dois números >>>\n\n");
    printf(" Me diga dois números e eu colocarei\n");
    printf(" os dois em ordem crescente.\n\n");

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d", &n1);

    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("\nOs números em ordem são %d e %d\n", n1, n2);
    } else if (n2 > n1) {
        printf("\nOs números em ordem são %d e %d\n", n2, n1);
    } else {
        printf("\nOs valores  digitados são iguais!\n");
    }
}
