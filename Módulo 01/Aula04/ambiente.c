#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("O %s tem %d anos de idade\n", "Vinícius", 17);
    printf("O seu peso atual é %.2fKg\n", 85.7);
    printf("O seu sexo é %c", 'M');
}
