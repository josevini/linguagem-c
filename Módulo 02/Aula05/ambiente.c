#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char n1[] = "TESTEs";
    char n2[] = "testes";
    char res[20];
    int comp = strcmp(strlwr(n1), strlwr(n2));
    strcpy(res, (comp == 0)? "iguais": "diferentes");
    printf("Os nomes são %s", res);
}
