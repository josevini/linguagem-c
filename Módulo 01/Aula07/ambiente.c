#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    char ender[40];

    printf("Digite seu nome: ");
    gets(nome);

    printf("Seu endereço: ");
    gets(ender);

    printf("Você digitou \"%s\" que mora em \"%s\"", nome, ender);
}
