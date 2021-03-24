#include <stdio.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "Portuguese");
    //int a = 3;
    //int b = 2;
    //int r = a + b;

    //printf("O resultado eh %i", r);

    //int x = 5;
    //int y = 2;
    //float z = (float) x / y;
    //printf("O resultado eh: %.1f ", z);
    operadorTernario();
}


int operadorTernario(){
    int a = 4;
    int b = 8;
    int c = (a>b)?1:2;
    printf("O resultado é %d", c);
}
