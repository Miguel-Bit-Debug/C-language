#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    calculaDobroETercaParte();
}


void calculaDobroETercaParte() {
    float num;

    printf("Digite um n�mero: ");
    scanf("%f", &num);

    printf("Analisando o n�mero %.0f, seu dobro � %.0f e sua ter�a parte � %.2f", num, num * 2, num / 3);
}
