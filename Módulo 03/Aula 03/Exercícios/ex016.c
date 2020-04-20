#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float total;
    printf("<<< EX016 - Consumidor ganha desconto >>>\n\n");

    printf("Qual foi o valor total das compras? R$");
    fflush(stdin);
    scanf("%f", &total);

    printf("----------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", total);

    if (total >= 500) {
        float desconto, novo_preco;
        desconto = total * 10 / 100;
        novo_preco = total - desconto;
        printf("========= ATENÇÃO =========\n");
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto\n",
                desconto);
        printf("O valor a ser pago é R$%.2f! ", novo_preco);
    }

    printf("Volte sempre!\n");
    printf("----------------------------\n");
}
