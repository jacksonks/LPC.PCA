//
//  main.c
//  LP2_2015s2_Funcoes_Exercicios

#include <stdio.h>


// Escreva uma função que receba três inteiros
// como parâmetros e retorne a média aritmética
// destes valores.
float media(int x0, int x1, int x2) {
    float m = (x0 + x1 + x2)/3.0;
    return m;
}


// Calcula a média dos valores do vetor
float mediaVetor(int v[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma = soma + v[i];
    }
    float media = (float)soma/tam;
    return media;
}


int main() {
    
    int a = 3;
    int b = 7;
    int c = 100;
    float x = media(a, b, c);
    printf("média = %f", x);
    
    int v[] = {2, 45, 10, 68, 100, 5, 77};
    int tam = 7;
    float y = mediaVetor(v, tam);
    printf("\nmédia vetor = %f", y);

    printf("\n~\n");
    return 0;
}
