#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int n, d;
    printf("<<< EX014 - Operadores de Deslocamento >>>\n\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &n);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &d);
    printf("------ OPERA��ES SHIFT ------\n");
    printf("Calculando %d >> %d � igual a %d\n",
           n, d, (n>>d));

    printf("Calculando %d << %d � igual a %d\n",
           n, d, (n<<d));
}
