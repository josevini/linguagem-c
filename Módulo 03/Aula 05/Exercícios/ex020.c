#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float dis, preco;
    printf("<<< EX020 - Preço da Passagem >>>\n\n");
    printf("======= TABELA DE PREÇOS ========\n");
    printf("Viagens até 199 Km\tR$0,50/Km\n");
    printf("A partir de 200 Km\tR$0,35/Km\n");
    printf("---------------------------------\n");
    printf("Distância total da viagem, em Km: ");
    fflush(stdin);
    scanf("%f", &dis);
    if (dis > 199) {
        preco = dis * 0.35;
        printf("Uma viagem de %.1f Km vai custar R$0,35/Km.", dis);
    } else {
        preco = dis * 0.50;
        printf("Uma viagem de %.1f Km vai custar R$0,50/Km.", dis);
    }
    printf("\nValor total: %.2f\n", preco);
}
