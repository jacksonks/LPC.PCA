//
//  main.c
//  LP2_2015s2_Funcoes_exec1
//
//  Created by Coelho on 29/10/15.
//  Copyright © 2015 Flavio Jose Mendes Coelho. All rights reserved.
//

// Leia dois vetores inteiros a e b, calcule o vetor soma de a e b, e mostre o vetor soma.
//2 4 6 8
//1 3 5 7
//3 7 11 15

#include <stdio.h>

void leVetor(int a[], int TAM) {
    for (int i = 0; i < TAM; i++) {
        printf("v[%d]:", i);
        scanf("%d", &a[i]);
    }
}


//       i ->
////a: 2 4 6 8
////b: 1 3 5 7
////s: 3 7
void calculaVetorSoma(int a[], int b[], int s[], int TAM) {
    for (int i = 0; i < TAM; i++) {
        s[i] = a[i] + b[i];
    }
}


void mostraVetor(int v[], int TAM) {
    printf("{");
    for (int i = 0; i < TAM - 1; i++) {
        printf("%d, ", v[i]);
    }
    printf("%d}\n", v[TAM-1]);
}


int main() {
    // Leia dois vetores inteiros a e b
    int const TAM = 5;
    int a[TAM] = {0};
    int b[TAM] = {0};
    printf("Lendo vetor a:\n");
    leVetor(a, TAM);
    printf("Lendo vetor b:\n");
    leVetor(b, TAM);

    // Calcula o vetor soma de a e b
    int soma[TAM] = {0};
    calculaVetorSoma(a, b, soma, TAM);

    // Mostrar os vetores.
    printf("a:");
    mostraVetor(a, TAM);
    printf("b:");
    mostraVetor(b, TAM);
    printf("soma:");
    mostraVetor(soma, TAM);

    printf("_\n");
    return 0;
}

