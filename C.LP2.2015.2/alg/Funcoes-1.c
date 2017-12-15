//
//  main.c
//  LP2_2015s2_Funcoes

#include <stdio.h>


// Função sem retorno de valor e sem parâmetros
void imprimeTema() {
    printf("Funções.\n");
}


// Função sem retorno de valor e sem parâmetros
void imprimeMenu() {
    printf("1. Ver extrato.\n");
    printf("2. sacar.\n");
    printf("3. depositar.\n");
    printf("4. Tranferir.\n");
    printf("5. Sair.\n");
}


// Função sem retorno de valor e com parâmetro
void imprime(int x) {
    printf("%d ", x);
}


// Função com retorno de valor e com parâmetros
int somaInteiros4(int x, int y) {
    int soma = 0;
    for (int i = x; i <= y; i++) {
        soma = soma + i;
        imprime(i);
    }
    printf("\n");
    x++;
    y++;
    return soma;
}


// Função com retorno de valor e sem parâmetros
int somaInteiros2() {
    int soma = 0;
    for (int i = 10; i <= 100; i++) {
        soma = soma + i;
        imprime(i);
    }
    printf("\n");
    return soma;
}


// Função sem retorno de valor e com parâmetros
void somaInteiros3(int x, int y) {
    int soma = 0;
    for (int i = x; i <= y; i++) {
        soma = soma + i;
        imprime(i);
    }
    printf("soma=%d", soma);
}


// Aula sobre funções
int main() {
 
    int inicio = 0, fim = 0;
    
    printf("Início:");
    scanf("%d", &inicio);
    printf("Fim:");
    scanf("%d", &fim);
    printf("soma=%d", somaInteiros4(inicio, fim));
    printf("\n inicio=%d  ", inicio);
    printf("\n fim=%d  ", fim);
    imprime(123456);
    printf("\n~\n");
    return 0;
}
