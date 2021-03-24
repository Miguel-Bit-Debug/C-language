#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    operadorTernario();
}

void operadorTernario() {
    int n1, num;

    printf("Digite um número: ");
    scanf("%i", &n1);

    if(n1 % 2 == 0) {
        num = n1;
        printf("O número %i é par", num);
    } else {
        num = n1;
        printf("O número %i é impar", num);
    }
}
