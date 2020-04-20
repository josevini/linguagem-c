#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    unsigned short int idade;
    float peso;

    printf("<<< EX003 - Dados >>>\n\n");

    printf("Qual é o seu nome? ");
    gets(nome);

    printf("Quantos anos você tem? ");
    scanf("%hu", &idade);

    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("\n----------<<< PROCESSANDO >>>----------\n");

    printf("Muito prazer, %s. Você tem %hu anos e pesa %.2fKg, correto? \n", nome, idade, peso);
    printf("FIM.");
}
