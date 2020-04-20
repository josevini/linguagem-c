#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int nasc, idade, ano = data->tm_year + 1900;

    printf("<<< EX017 - Fila de Banco >>>\n\n");
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &nasc);

    idade = ano - nasc;

    printf("---------------------------\n");
    printf("Você tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao banco Estudonauta!\n");
    if (idade >= 65) {
        printf("=== ATENÇÃO! DIRIJA-SE A FILA PREFERENCIAL ===\n");
    }

    printf("----------------------------\n");
}
