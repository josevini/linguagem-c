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

    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %d.\n", ano);
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d", &nasc);
    idade = ano - nasc;
    printf("----------------------------\n");
    printf("Sua idade atual � %d anos.\n", idade);

    if (idade >= 18) {
        printf("Voc� j� fez 18 anos. Espero sinceramente que voc� tenha se alistado.");
    } else {
        printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.");
    }
}
