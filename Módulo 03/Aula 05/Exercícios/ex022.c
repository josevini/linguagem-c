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

    printf("<<< EX022 - D� pra ver o filme? >>>\n\n");
    printf("{ EXERC�CIO 022 - D� pra ver o filme? }\n\n");
    printf("============= CINEMA ESTUDONAUTA =============\n");
    printf("ASSISTA A UM FILME - PRE�O DO INGRESSO: R$20,00\n");
    printf("-----------------------------------------------\n");
    printf("Qual o hor�rio da sess�o? ");
    fflush(stdin);
    scanf("%d", &horario);
    printf("Quanto dinheiro voc� tem? R$");
    fflush(stdin);
    scanf("%f", &dinheiro);

    printf("\nAgora s�o %d horas\n", hora_atual);
    if (dinheiro >= 20 && horario > hora_atual) {
        printf("Voc� consegue comprar o ingresso!");
    } else {
        printf("Voc� n�o consegue comprar o ingresso.");
    }
}
