#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    letras();
}


void letras() {
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c", letra, letra - 1, letra + 1);
}
