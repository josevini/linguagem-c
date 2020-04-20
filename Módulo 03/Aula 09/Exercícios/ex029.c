#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float m, p;
    int op;
    char planeta[12];

    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n");
    printf(" Sua massa em (Kg) = ");
    fflush(stdin);
    scanf("%f", &m);

    printf("\n\t ESCOLHA UM PLANETA\n");
    printf("\t=====================\n");
    printf("\t1\tTerra\n");
    printf("\t2\tV�nus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJ�piter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t7\tMerc�rio\n");
    printf("\t=====================\n");
    printf("\tDigite sua op��o => ");
    fflush(stdin);
    scanf("%d", &op);

    printf("\n-----------------------------------------\n");
    switch(op) {
        case 1:
            strcpy(planeta, "terra");
            p = m * 9.8;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 2:
            strcpy(planeta, "v�nus");
            p = m * 8.87;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 3:
            strcpy(planeta, "marte");
            p = m * 3.724;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 4:
            strcpy(planeta, "j�piter");
            p = m * 24.79;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 5:
            strcpy(planeta, "saturno");
            p = m * 10.44;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 6:
            strcpy(planeta, "urano");
            p = m * 8.87;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        case 7:
            strcpy(planeta, "merc�rio");
            p = m * 3.7;
            printf("No planeta %s, seu peso seria %.2f Kg", strupr(planeta), p);
            break;

        default:
            printf("Planeta n�o registrado! Imposs�vel calcular.");
    }

    printf("\n-----------------------------------------\n");
    printf("VOLTE SEMPRE!");
}
