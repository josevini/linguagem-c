#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char produto[20];
    float preco, novop;
    int desconto;

    printf("Produto: ");
    fflush(stdin);
    gets(produto);

    printf("Preço do %s: R$", produto);
    fflush(stdin);
    scanf("%f", &preco);

    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%d", &desconto);

    novop = preco - (preco * desconto /100);

    printf("O produto %s custava R$%.2f.\n", produto, preco);
    printf("Porém, com %d%%, passa a custar R$%.2f\n\n",
           desconto, novop);

}
