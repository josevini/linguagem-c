#include <stdio.h>
#include <locale.h>

void main() {
    // \n -> Nova Linha
    // \t -> Tabula��o
    // \b -> Backspace
    // \r -> Retorno
    // \ -> Barra
    // \" -> Aspas
    // \? -> Interroga��o
    // \a ou \7 -> beep
    // %% -> Porcentagem

    setlocale(LC_ALL, "Portuguese");
    printf("C � \n\"SUPER\"\n F�cil!");
}
