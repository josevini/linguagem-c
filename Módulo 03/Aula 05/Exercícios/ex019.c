#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int ano;
    printf("<<< EX019 - Ano Bissexto >>>\n\n");
    printf("Digite um ano qualquer: ");
    fflush(stdin);
    scanf("%d", &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        printf("O ano %u É BISSEXTO.", ano);
    } else {
        printf("O ano %u NÃO É BISSEXTO.", ano);
    }
}
