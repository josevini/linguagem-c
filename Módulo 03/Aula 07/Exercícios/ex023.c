#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("<<< EX023 - Positivo ou Negativo >>>\n\n");
    printf(" Me diga um n�mero e eu te direi se\n");
    printf("ele � POSITIVO, NEGATIVO OU NULO.\n\n");

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &n);

    if (n > 0) {
        printf("O valor %d � POSITIVO.", n);
    } else if (n < 0) {
        printf("O valor %d � NEGATIVO.", n);
    } else {
        printf("O valor %d � NULO.", n);
    }
}
