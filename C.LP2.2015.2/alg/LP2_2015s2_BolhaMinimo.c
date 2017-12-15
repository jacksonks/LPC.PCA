//
//  LP2_2015s2_VetorMatriz_Listas.c
//
//  Created by Coelho on 18/09/15.
//  Copyright (c) 2015 Flavio Jose Mendes Coelho. All rights reserved.


// Ordenar um vetor ou matriz em ordem não-decrescente (ou não-crescente)
#include <stdio.h>
#define TAM 10

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






#ifdef COMPILA

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

