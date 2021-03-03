#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    imprimeDadosPessoais();
}


void imprimeDadosPessoais() {
    char nome[30];
    int idade;
    float peso;
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Seu nome é %s. Você tem %i e pesa %.2fKg, correto?", nome, idade, peso);
}
