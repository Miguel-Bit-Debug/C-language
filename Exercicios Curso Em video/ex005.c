#include <stdio.h>
#include <locale.h>

void main() {
    imprimeNumerosReais();
}

void imprimeNumerosReais() {
    float numero;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número real: ");
    scanf("%f", &numero);

    printf("Você digitou %.1f", numero);

}
