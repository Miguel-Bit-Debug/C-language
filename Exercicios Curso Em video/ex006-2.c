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
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;
    fflush(stdin);

    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d", num, antecessor, sucessor);
}
