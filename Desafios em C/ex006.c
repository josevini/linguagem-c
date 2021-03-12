#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    short int n, d, t;
    float rq;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &n);
    d = (n * 2);
    t = (n * 3);
    rq = sqrt(n);
    printf("O dobro de %d vale %d\n", n, d);
    printf("O triplo de %d vale %d\n", n, t);
    printf("A raiz quadrada de %d vale %.2f", n, rq);

}
