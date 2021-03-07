#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    calculaDobroETercaParte();
}


void calculaDobroETercaParte() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    printf("Analisando o número %.0f, seu dobro é %.0f e sua terça parte é %.2f", num, num * 2, num / 3);
}
