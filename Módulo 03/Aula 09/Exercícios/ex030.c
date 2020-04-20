#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float preco, n_preco;
    int op;

    printf("<<< EX030 - Preço por Época >>>\n");
    printf("Digite o preço de um produto => R$");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\t ESCOLHA UM PERÍODO\n");
    printf("\t=====================\n");
    printf("\t1\tCarnval [+10]\n");
    printf("\t2\tFérias Escolares [+20]\n");
    printf("\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t=====================\n");
    printf("\tDigite sua opção => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n---------------------------------------\n");
    switch(op) {
        case 1:
            n_preco = preco + (preco * 10 / 100);
            printf("Na época do CARNAVAL, o preço do produto vai para %.2f", n_preco);
            break;

        case 2:
            n_preco = preco + (preco * 20 / 100);
            printf("Na época das FÉERIS, o preço do produto vai para %.2f", n_preco);
            break;

        case 3:
            n_preco = preco + (preco * 5 / 100);
            printf("Na época do DIA DAS CRIANÇAS, o preço do produto vai para %.2f", n_preco);
            break;

        case 4:
            n_preco = preco - (preco * 30 / 100);
            printf("Na época da BLACK FRIDAY, o preço do produto vai para %.2f", n_preco);
            break;

        case 5:
            n_preco = preco - (preco * 5 / 100);
            printf("Na época do NATAL, o preço do produto vai para %.2f", n_preco);
            break;

        default:
            printf("Em época assim, mantenha o preço do produto em %.2f", preco);
    }
    printf("\n---------------------------------------\n");
    printf("VOLTE SEMPRE!");
}
