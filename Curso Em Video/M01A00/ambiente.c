#include <stdio.h> // diretiva de pre-processamento
#include <locale.h>
//#define TOTAL 8
void main() {

    setlocale(LC_ALL, "Portuguese");
    //printf("Oi\n");
    //puts("C � \n\"super\" \nF�cil!");
    //listagemDeAlunos();
    //puts("\n\n------------EX002---------------");
    //caracteresDeEscape();
    //tiposPrimitivos();
    //constantes();
    entradaDeDados();
}

void listagemDeAlunos(){
    //puts("Listagem de Alunos");
    //puts("Nome\t\tNota");
    //puts("--------------------");
    //puts("Ana Beatriz\t8.5");
    //puts("Bianca MArtins\t9.0");
    //puts("Cl�udio S�\t5.5");
    //puts("Giovana Silva\t7.5");
}

void caracteresDeEscape(){
    //puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    //puts("\\a\t=\tBeep");
    //puts("\\n\t=\Nova Linha");
    //puts("\\t\t=\tTabula��o");
    //puts("\\\\\t=\tBarra");
    //puts("%%\t=\tPorcentagem");
    //puts("\\?\t=\tInterroga��o");
}

void tiposPrimitivos(){
    //unsigned int idade = 33;
    //float peso = 85.9;
    //char sexo = 'M';
    //char *nome = "Juvenal";
    //printf("%s � do sexo %c, tem %i anos e pesa %.2fKg", nome, sexo, idade, peso);
}

void constantes(){
    //const int TOTAL = 8;
    //printf("%i", TOTAL);
}


void entradaDeDados(){
    setlocale(LC_ALL, "Portguese");
    //int n1;
    //float n2;

    //printf("Digite o primeiro n�mero: ");
    //scanf("%d", &n1);

    //printf("Digite o segundo valor: ");
    //scanf("%f", &n2);

    //printf("Voc� digitou os valores %d e %.1f", n1, n2);

    //char r;
    //char s;

    //printf("Digite uma letra: ");
    //scanf("%c", &r);
    //fflush(stdin);
    //printf("Digite outra letra: ");
    //scanf("%c", &s);
    //fflush(stdin);
    //printf("Voc� digitou as letras \"%c\" e \"%c\"", r, s);

    //char resp;
    //printf("Digite uma letra: ");
    //resp = getchar();

    //fflush(stdin);

    //char resp2;
    //printf("Digite outra letra: ");
    //resp2 = getchar();

    //fflush(stdin);

    //printf("Voc� digitou \"%c\" e \"%c\"", resp, resp2);

    char nome[30];
    printf("Digite seu nome: ");
    //scanf("%s", nome);
    gets(nome);
    printf("Ol� %s", nome);


}
