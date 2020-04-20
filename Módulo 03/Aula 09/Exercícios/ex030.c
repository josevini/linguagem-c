#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float preco, n_preco;
    int op;

    printf("<<< EX030 - Pre�o por �poca >>>\n");
    printf("Digite o pre�o de um produto => R$");
    fflush(stdin);
    scanf("%f", &preco);

    printf("\n\t ESCOLHA UM PER�ODO\n");
    printf("\t=====================\n");
    printf("\t1\tCarnval [+10]\n");
    printf("\t2\tF�rias Escolares [+20]\n");
    printf("\t3\tDia das Crian�as [+5]\n");
    printf("\t4\tBlack Friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t=====================\n");
    printf("\tDigite sua op��o => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n---------------------------------------\n");
    switch(op) {
        case 1:
            n_preco = preco + (preco * 10 / 100);
            printf("Na �poca do CARNAVAL, o pre�o do produto vai para %.2f", n_preco);
            break;

        case 2:
            n_preco = preco + (preco * 20 / 100);
            printf("Na �poca das F�ERIS, o pre�o do produto vai para %.2f", n_preco);
            break;

        case 3:
            n_preco = preco + (preco * 5 / 100);
            printf("Na �poca do DIA DAS CRIAN�AS, o pre�o do produto vai para %.2f", n_preco);
            break;

        case 4:
            n_preco = preco - (preco * 30 / 100);
            printf("Na �poca da BLACK FRIDAY, o pre�o do produto vai para %.2f", n_preco);
            break;

        case 5:
            n_preco = preco - (preco * 5 / 100);
            printf("Na �poca do NATAL, o pre�o do produto vai para %.2f", n_preco);
            break;

        default:
            printf("Em �poca assim, mantenha o pre�o do produto em %.2f", preco);
    }
    printf("\n---------------------------------------\n");
    printf("VOLTE SEMPRE!");
}
