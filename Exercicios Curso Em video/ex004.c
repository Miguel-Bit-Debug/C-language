#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    cadastroPessoa();
}


void cadastroPessoa() {
    char nomePessoa1[10];
    char nomePessoa2[10];
    char nomePessoa3[10];

    float nota1;
    float nota2;
    float nota3;

    char sexo1;
    char sexo2;
    char sexo3;

    printf("Cadastrando primeira pessoa: \n");
    printf("\n----------------------------\n");
    printf("NOME: ");
    gets(nomePessoa1);

    printf("SEXO [F/M]: ");
    sexo1 = getchar();

    printf("NOTA: ");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("\nCadastrando segunda pessoa: ");
    printf("\n----------------------------\n");
    printf("NOME: ");
    gets(nomePessoa2);

    printf("SEXO [F/M]: ");
    sexo2 = getchar();

    printf("NOTA: ");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("\nCadastrando terceira pessoa");
    printf("\n----------------------------\n");
    printf("NOME: ");
    gets(nomePessoa3);

    printf("SEXO [F/M]: ");
    sexo3 = getchar();


    printf("NOTA: ");
    scanf("%f", &nota3);
    fflush(stdin);


    printf("\n----------------------------\n");
    printf("\nListagem completa: \n");
    printf("%s\t%c\t%f\n", nomePessoa1, sexo1, nota1);
    printf("%s\t%c\t%f\n", nomePessoa2, sexo2, nota2);
    printf("%s\t%c\t%f\n", nomePessoa3, sexo3, nota3);
}
