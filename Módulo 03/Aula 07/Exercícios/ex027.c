#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, ma, in, me;
    printf("<<< EX027 - Três valores em ordem >>>\n");
    printf(" Me diga três números e eu colocarei\n eles em ordem pra você.\n\n");

    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%d", &n1);

    printf("Segundo número: ");
    fflush(stdin);
    scanf("%d", &n2);

    printf("Terceiro número: ");
    fflush(stdin);
    scanf("%d", &n3);

    printf("---------------------------\n");

    if (n1 > n2 && n2 > n3) {
        ma = n1;
        in = n2;
        me = n3;
    }

    else if (n1 > n3 && n3 > n2) {
        ma = n1;
        in = n3;
        me = n2;
    }

    else if (n2 > n1 && n1 > n3) {
        ma = n2;
        in = n1;
        me = n3;
    }

    else if (n2 > n3 && n3 > n1) {
        ma = n2;
        in = n3;
        me = n1;
    }

    else if (n3 > n1 && n1 > n2) {
        ma = n3;
        in = n1;
        me = n2;
    }

    else if (n3 > n2 && n2 > n1) {
        ma = n3;
        in = n2;
        me = n1;
    }

    printf("MAIOR: %d\n", ma);
    printf("INTERMEDIÁRIO: %d\n", in);
    printf("MENOR: %d\n", me);
}
