#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int i, n, t;
    char opc;
    opc = 's';

    t = n*i;

    while (opc != 'n' && opc == 's') {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Digite um número para ver sua tabuada: ");
        scanf("%i", &n);

        for (i = 1; i <= 10; i++) {
            printf("%i x %i = %i\n", n, i, n*i);
        }

        printf("Quer continuar? [s/n] - ");
        scanf("%s", &opc);

        while (opc != 's' && opc != 'n') {
            printf("Opção inválida! Tente novamente!\n");
            printf("Quer continuar? [s/n] - ");
            scanf("%s", &opc);
        }
    }
    system("pause");
    system("cls");
    printf("==================================\n");
    printf("\tPrograma encerrado!\n");
    printf("==================================");
}
