#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    operadorTernario();
}

void operadorTernario() {
    int n1, num;

    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    if(n1 % 2 == 0) {
        num = n1;
        printf("O n�mero %i � par", num);
    } else {
        num = n1;
        printf("O n�mero %i � impar", num);
    }
}
