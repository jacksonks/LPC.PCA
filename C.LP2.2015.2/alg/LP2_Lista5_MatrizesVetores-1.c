//
//  LP2_2015s2_VetorMatriz_Listas.c
//
//  Created by Coelho on 18/09/15.
//  Copyright (c) 2015 Flavio Jose Mendes Coelho. All rights reserved.

#include <stdio.h>
#define M 2
#define N 3
#define Q 2

// Produto de matrizes
int main() {

    int a[M][N] = {{1, 2, 3},
                   {4, 5, 6}};
    int b[N][Q] = {{7, 5},
                   {0, 1},
                   {-1, 9}};
    int prod[M][Q];
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < Q; j++) {
            prod[i][j] = 0;
            for(int k = 0; k < N; k++) {
                prod[i][j] = prod[i][j] + a[i][k]*b[k][j];
            }
        }
    }

    // Imprime uma matriz
    for(int i = 0; i < M; i++) {
        printf("|");
        for(int j = 0; j < Q; j++) {
            printf("%4d", prod[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\n~~\n");
    return 0;
}






#ifdef COMPILA

#include <stdio.h>
#define LIN 3
#define COL 4

// Soma de matrizes
int main() {
    
    int a[LIN][COL] = {{1, 2, 3, 4},
        {2, 4, 6, 8},
        {1, 1, 1, 1}};
    int b[LIN][COL] = {{0, 0, 1, -5},
        {-2, 7, 0, 1},
        {-9, 4, 2, 0}};
    int soma[LIN][COL];
    
    // Computa a soma das matrizes
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Imprime uma matriz
    for(int i = 0; i < LIN; i++) {
        printf("|");
        for(int j = 0; j < COL; j++) {
            printf("%4d", soma[i][j]);
        }
        printf("|");
        printf("\n");
    }
    
    printf("\n~~\n");
    return 0;
}


//------------------------------------------


// Bubble sort (ordenação bolha)
int main() {
    //                                        i
    //                                           j j+1
    //    int v[TAM] = {9, 8, 1, 6, 10, 3, 5, 4, 2, 7};
    //    int v[TAM] = {20, 18, 6, 8, -10, 12, -14, 16, 4, -2};
    char v[TAM] = {'k', 'i', 'f', 'h', 'd', 'g', 'e', 'b', 'j', 'a'};
    
    // Processa a ordenação
    for(int i = TAM - 1; i >= 0; i--) {
        for(int j = 0; j <= i - 1; j++) {
            if (v[j] > v[j+1]) {
                // troca (swap)
                int tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
    
    // Imprime o vetor ordenado
    printf("Vetor: {");
    for(int j = 0; j < TAM; j++) {
        // Se for imprimir um vetor de inteiros
        // precisa mudar de %c para %d.
        printf("%c, ", v[j]);
    }
    printf("}\n");
    
    printf("\n~~\n");
    return 0;
}


//----------------------------------------------


// Determinar o número mínimo (ou máximo, ou ambos) em um vetor ou matriz.
#include <stdio.h>
#define TAM 10

int main() {
    
    // min = 0
    //                    i
    int v[TAM] = {0, -7, 5, -225, 45, 123, 12, 66, -8, 4};
    
    // Busca mínimo
    int min = v[0];
    int i;
    for (i = 1; i < TAM; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    
    // Imprime vetor
    printf("Vetor: {");
    for (i = 1; i < TAM; i++) {
        printf("%d, ", v[i]);
    }
    printf("}\n");
    
    // Imprime o mínimo
    printf("Mínimo: %d\n", min);
    
    printf("\n~~\n");
    return 0;
}


#endif

