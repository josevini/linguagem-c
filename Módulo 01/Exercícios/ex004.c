#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[30], nome2[30], nome3[30];

    char sexo1, sexo2, sexo3;

    float nota1, nota2, nota3;

    printf("<<<  EX004 - Listagem >>>\n\n");

    printf("Cadastrando a primeira pessoa: \n");
    printf("------------------------------\n");

    printf("NOME: ");
    fflush(stdin);
    gets(nome1);

    printf("SEXO - [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();

    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa: \n");
    printf("------------------------------\n");

    printf("NOME: ");
    fflush(stdin);
    gets(nome2);

    printf("SEXO - [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();

    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa: \n");
    printf("------------------------------\n");

    printf("NOME: ");
    fflush(stdin);
    gets(nome3);

    printf("SEXO - [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();

    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa\n");
    printf("------------------------------\n");
    printf("%s %18s %5s\n", "NOME", "SEXO", "NOTA");
    printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);
    printf("------------------------------\n");
}
