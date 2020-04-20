#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char item[35];
    printf("Digite algo: ");
    fflush(stdin);
    gets(item);
}
