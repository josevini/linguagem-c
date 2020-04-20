#include <stdio.h>
#include <locale.h>

void main() {
    // \n -> Nova Linha
    // \t -> Tabulação
    // \b -> Backspace
    // \r -> Retorno
    // \ -> Barra
    // \" -> Aspas
    // \? -> Interrogação
    // \a ou \7 -> beep
    // %% -> Porcentagem

    setlocale(LC_ALL, "Portuguese");
    printf("C é \n\"SUPER\"\n Fácil!");
}
