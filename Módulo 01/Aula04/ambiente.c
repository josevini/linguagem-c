#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("O %s tem %d anos de idade\n", "Vin�cius", 17);
    printf("O seu peso atual � %.2fKg\n", 85.7);
    printf("O seu sexo � %c", 'M');
}
