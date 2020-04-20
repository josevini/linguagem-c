#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n, opo;
    float inv;
    printf("<<< EX021 - Inverso ou Oposto >>>\n\n");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &n);

    if (n < 0) {
        opo = n - (n * 2);
        printf("O oposto de %d é %d\n", n, opo);
    } else {
        inv = 1/(float)n;
        printf("O inverso de %d é %.4f\n", n, inv);
    }
}
