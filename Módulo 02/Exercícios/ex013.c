#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("<<< EX013 - Operadores Bitwise >>>\n\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%d", &n2);
    printf("------ OPERAÇÕES BITWISE -----\n");
    printf("Calculando %d & %d é igual a %d\n",
           n1, n2, (n1&n2));

    printf("Calculando %d | %d é igual a %d\n",
           n1, n2, (n1|n2));

    printf("Calculando %d ^ %d é igual a %d\n",
           n1, n2, (n1^n2));
}
