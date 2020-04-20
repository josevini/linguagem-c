#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char es[2], nasc[15];
    printf("<<< EX026 - Qual é seu Estado? >>>\n\n");
    printf("Em qual estado do Brasil você nasceu? ");
    fflush(stdin);
    gets(es);

    printf("Nascendo em %s, você é ", strupr(es));

    if (strcmp(strlwr(es), "rj") == 0) {
        strcpy(nasc, "carioca");
        printf("%s\n", strupr(nasc));
    }

    else if (strcmp(es, "sp") == 0) {
        strcpy(nasc, "paulista");
        printf("%s\n", strupr(nasc));
    }

    else if (strcmp(es, "mg") == 0) {
        strcpy(nasc, "mineiro");
        printf("%s\n", strupr(nasc));
    }

    else if (strcmp(es, "al") == 0) {
        strcpy(nasc, "alagoano");
        printf("%s\n", strupr(nasc));
    }

    else if (strcmp(es, "rn") == 0) {
        strcpy(nasc, "potiguar");
        printf("%s\n", strupr(nasc));
    }

    else {
        printf("natural da sua cidade, mas ainda não sei como te chamar!\n");
    }
}
