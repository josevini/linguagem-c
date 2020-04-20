#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char letra, antes, depois;

    printf("Digite uma letra: ");
    fflush(stdin);
    letra = getchar();

    antes = letra - 1;
    depois = letra + 1;

    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n",
           letra, antes, depois);
}
