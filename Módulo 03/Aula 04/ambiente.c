#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O valor %i � par", n);
    } else {
        printf("O valor %i � �mpar", n);
    }
    printf("\nACABOU\n");
}
