#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n, comp = rand() % 5 + 1;

    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");

    printf("Qual � o seu palpite? ");
    scanf("%d", &n);

    printf("Eu pensei no n�mero %d e voc� pensou no n�mero %d.\n\n", comp, n);
}
