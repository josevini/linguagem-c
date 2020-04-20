#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Muito prazer, %s!", nome);
}
