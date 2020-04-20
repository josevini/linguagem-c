#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm *hora;
    hora = localtime(&t);

    unsigned int horario,  hora_atual = hora->tm_hour;
    float dinheiro;

    printf("<<< EX022 - Dá pra ver o filme? >>>\n\n");
    printf("{ EXERCÍCIO 022 - Dá pra ver o filme? }\n\n");
    printf("============= CINEMA ESTUDONAUTA =============\n");
    printf("ASSISTA A UM FILME - PREÇO DO INGRESSO: R$20,00\n");
    printf("-----------------------------------------------\n");
    printf("Qual o horário da sessão? ");
    fflush(stdin);
    scanf("%d", &horario);
    printf("Quanto dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f", &dinheiro);

    printf("\nAgora são %d horas\n", hora_atual);
    if (dinheiro >= 20 && horario > hora_atual) {
        printf("Você consegue comprar o ingresso!");
    } else {
        printf("Você não consegue comprar o ingresso.");
    }
}
