#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n Listagem de Alunos\n");
    printf(" %s %14s\n", "NOME", "NOTA");
    printf("---------------------\n");
    printf("%-15s %.1f\n", "Ana Beatriz", 8.5);
    printf("%-15s %.1f\n", "Bianca Mantins", 9.0);
    printf("%-15s %.1f\n", "Cláudio Sá", 5.5);
    printf("%-15s %.1f\n", "Giovana Silva", 5.5);
    printf("---------------------\n");
}
