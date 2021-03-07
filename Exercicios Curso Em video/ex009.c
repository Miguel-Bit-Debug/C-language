#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    media();
}

void media() {
    char nome[10];
    float nota1;
    float nota2;
    float media;

    printf("Nome do aluno: ");
    gets(nome);

    printf("Nota 1: ");
    scanf("%f", &nota1);
    fflush(stdin);


    printf("Nota 2: ");
    scanf("%f", &nota2);
    fflush(stdin);


    media = (nota1 + nota2) / 2;

    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f", nome, nota1, nota2, media);

}
