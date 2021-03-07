#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    desconto();
}

void desconto() {
    char produto[30];
    float preco;
    float desconto;
    float total;
    char simbolo = '%';

    printf("Produto: ");
    gets(produto);

    printf("Preço do %s: ", produto);
    scanf("%f", &preco);
    fflush(stdin);

    printf("Desconto (%c): ", simbolo);
    scanf("%f", &desconto);

    total = preco - (preco * desconto / 100);


    printf("O produto %s custava %.2f mas com %.2f%c de desconto, passa a custar R$%.2f", produto, preco, desconto, simbolo, total);



}
