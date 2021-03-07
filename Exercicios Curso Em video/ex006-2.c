#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    imprimeNumeros();
}

void imprimeNumeros() {
    int num;
    int antecessor;
    int sucessor;
    printf("Digite um número: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;
    fflush(stdin);

    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d", num, antecessor, sucessor);
}
