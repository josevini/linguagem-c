#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2;
    char op;
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n\n");

    printf("VALOR 1: ");
    fflush(stdin);
    scanf("%d", &v1);

    printf("VALOR 2: ");
    fflush(stdin);
    scanf("%d", &v2);

    printf("=========================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("=========================\n");

    printf("Digite sua op��o => ");
    fflush(stdin);
    scanf("%c", &op);

    printf("-----------------------------------\n");
    switch (op) {
        case '+':
            printf("O resultado de %d + %d � igual a %d", v1, v2, (v1+v2));
            break;

        case '-':
            printf("O resultado de %d - %d � igual a %d", v1, v2, (v1-v2));
            break;

        case '*':
            printf("O resultado de %d * %d � igual a %d", v1, v2, (v1*v2));
            break;

        case '/':
            printf("O resultado de %d / %d � igual a %.2f", v1, v2, ((float)v1/v2));
            break;

        default:
            printf("Opera��o inv�lida! Tente novamente.");
    }
    printf("\n-----------------------------------\n");
}
