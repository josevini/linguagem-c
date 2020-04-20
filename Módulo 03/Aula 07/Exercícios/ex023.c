#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("<<< EX023 - Positivo ou Negativo >>>\n\n");
    printf(" Me diga um número e eu te direi se\n");
    printf("ele é POSITIVO, NEGATIVO OU NULO.\n\n");

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &n);

    if (n > 0) {
        printf("O valor %d é POSITIVO.", n);
    } else if (n < 0) {
        printf("O valor %d é NEGATIVO.", n);
    } else {
        printf("O valor %d é NULO.", n);
    }
}
