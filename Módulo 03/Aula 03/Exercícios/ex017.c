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
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d", &nasc);

    idade = ano - nasc;

    printf("---------------------------\n");
    printf("Voc� tem %d anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao banco Estudonauta!\n");
    if (idade >= 65) {
        printf("=== ATEN��O! DIRIJA-SE A FILA PREFERENCIAL ===\n");
    }

    printf("----------------------------\n");
}
