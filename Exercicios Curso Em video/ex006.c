#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#import <locale.h>


void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = rand() % 2;
    int jogador;

    printf("Vou pensar em um numero entre 1 e 5 tente adivinhar!\n");
    printf("Qual seu palpite? ");
    scanf("%i", &jogador);

    if(n == jogador) {
        printf("Você acertou! Computador: [%i] x Jogador: [%i]", n, jogador);
    } else {
        printf("Você errou Computador: [%i] x Jogador: [%i]", n, jogador);
    }
}
