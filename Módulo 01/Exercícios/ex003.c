#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    unsigned short int idade;
    float peso;

    printf("<<< EX003 - Dados >>>\n\n");

    printf("Qual � o seu nome? ");
    gets(nome);

    printf("Quantos anos voc� tem? ");
    scanf("%hu", &idade);

    printf("Qual � o seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n----------<<< PROCESSANDO >>>----------\n");

    printf("Muito prazer, %s. Voc� tem %hu anos e pesa %.2fKg, correto? \n", nome, idade, peso);
    printf("FIM.");
}
