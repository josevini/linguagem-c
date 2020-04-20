#include <stdio.h>
#include <locale.h>
#define TOTAL 22

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("%d\n", TOTAL);
}
