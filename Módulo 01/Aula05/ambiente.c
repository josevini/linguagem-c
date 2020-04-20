#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    unsigned int idade = 17;
    float peso = 81.5;
    char sexo = 'M';
    char nome[] = "Vinícius Silva";

    printf("Nome: %s\nIdade: %d\nSexo: %c\nPeso: %.2fKg", nome, idade, sexo, peso);
}
