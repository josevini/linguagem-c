#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);

    /*if (n1 > n2) {
        printf("O maior valor � o primeiro: %d", n1);
    } else {
        if (n1 < n2) {
            printf("O maior valor � o segundo: %d", n2);
        } else {
            printf("Os valores s�o iguais");
        }
    }*/

    if (n1 > n2) {
        printf("O maior valor � o primeiro: %d", n1);
    } else if (n1 < n2) {
        printf("O maior valor � o segundo: %d", n2);
    } else {
        printf("Os valores s�o iguais");
    }
}
