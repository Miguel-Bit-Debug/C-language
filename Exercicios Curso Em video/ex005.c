#include <stdio.h>
#include <locale.h>

void main() {
    imprimeNumerosReais();
}

void imprimeNumerosReais() {
    float numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero real: ");
    scanf("%f", &numero);

    printf("Voc� digitou %.1f", numero);

}
