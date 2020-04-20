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
    printf("+\tAdição\n");
    printf("-\tSubtração\n");
    printf("*\tMultiplicação\n");
    printf("/\tDivisão\n");
    printf("=========================\n");

    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%c", &op);

    printf("-----------------------------------\n");
    switch (op) {
        case '+':
            printf("O resultado de %d + %d é igual a %d", v1, v2, (v1+v2));
            break;

        case '-':
            printf("O resultado de %d - %d é igual a %d", v1, v2, (v1-v2));
            break;

        case '*':
            printf("O resultado de %d * %d é igual a %d", v1, v2, (v1*v2));
            break;

        case '/':
            printf("O resultado de %d / %d é igual a %.2f", v1, v2, ((float)v1/v2));
            break;

        default:
            printf("Operação inválida! Tente novamente.");
    }
    printf("\n-----------------------------------\n");
}
