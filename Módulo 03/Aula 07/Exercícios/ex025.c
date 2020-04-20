#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    unsigned int nasc, idade, atual = data->tm_year + 1900;

    printf("<<< EX025 - Serviço Militar v2.0 >>>\n\n");
    printf("Atualmente estamos em %u.\n", atual);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d", &nasc);

    idade = atual - nasc;

    printf("-------------------------------------------------------\n");
    printf("Sua idade atual é %u anos.\n", idade);

    if (idade > 18) {
        printf("Seu alistamento foi em %u. Já se passaram %u ano(s).",
               (nasc + 18), (atual - (nasc + 18)));
    }else if (idade < 18) {
        printf("Seu alistamento será em %u. Ainda falta(m) %u ano(s).",
               (nasc + 18), ((nasc + 18) - atual));
    } else {
        printf("Você completa 18 anos exatamente em %u. Vá se alistar!",
               atual);
    }
    printf("\n-------------------------------------------------------\n");
}
