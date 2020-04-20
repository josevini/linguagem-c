#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n, comp = rand() % 5 + 1;

    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");

    printf("Qual é o seu palpite? ");
    scanf("%d", &n);

    printf("Eu pensei no número %d e você pensou no número %d.\n\n", comp, n);
}
