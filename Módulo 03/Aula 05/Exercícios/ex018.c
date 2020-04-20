#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    int idade, nasc, ano = data->tm_year + 1900;

    printf("<<< EX018 - Serviço Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %d.\n", ano);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &nasc);
    idade = ano - nasc;
    printf("----------------------------\n");
    printf("Sua idade atual é %d anos.\n", idade);

    if (idade >= 18) {
        printf("Você já fez 18 anos. Espero sinceramente que você tenha se alistado.");
    } else {
        printf("Você ainda não tem 18 anos. Não pode se alistar.");
    }
}
