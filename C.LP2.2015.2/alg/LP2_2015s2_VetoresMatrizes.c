//
//  main.c
//  LP2_2015s2_Vetores_Matrizes

#include <stdio.h>
#define LIN 5
#define COL 5

int main() {
    int m[LIN][COL] = {{2, 4, 6, 8, 10},
        {1, 3, 5, 7, 7},
        {-11, 33, 15, 22, 17},
        {-1, -3, 56, 70, 75},
        {0, -1, 100, -2, -70}};

    // Imprime os elementos da diagonal principal
    for (int i = 0; i < COL; i++) {
        printf("%d, ", m[i][i]);
    }
    
    printf("\n~~\n");
    return 0;
}




//------------------------------------------


#include <stdio.h>
#define LIN 5
#define COL 5

int main() {
    int m[LIN][COL] = {{2, 4, 6, 8, 10},
        {1, 3, 5, 7, 7},
        {-11, 33, 15, 22, 17},
        {-1, -3, 56, 70, 75},
        {0, -1, 100, -2, -70}};
    
    // Imprime os elementos da diagonal principal
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == j) {
                printf("%d, ", m[i][j]);
            }
        }
    }
    
    printf("\n~~\n");
    return 0;
}






//---------------------------------------------



#include <stdio.h>
#define LIN 3
#define COL 5

int main() {
    int m[LIN][COL] = {{2, 4, 6, 8, 10},
        {1, 3, 5, 7, 7},
        {0, 1, 1, 2, 7}};
    
    int x = 7;
    
    // Busca a primeira ocorrência de x na matriz
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if (m[i][j] == x) {
                printf("Encontrei!\n");
                i = LIN;
                break;
            }
        }
    }
    
    printf("\n~~\n");
    return 0;
}


//------------------------------------------



#include <stdio.h>
#define LIN 3
#define COL 5

int main() {
    //    int m[LIN][COL] = {{2, 4, 6, 8, 10},
    //        {1, 3, 5, 7,  9},
    //        {0, 1, 1, 2,  3}};
    
    // Lê a matriz
    for (int i = 0; i < LIN; i++) {
        // imprime uma linha
        for (int j = 0; j < COL; j++) {
            printf("m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    
    // Imprime matriz
    for (int i = 0; i < LIN; i++) {
        // imprime uma linha
        for (int j = 0; j < COL; j++) {
            printf("%d, ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}



//------------------------------------------


#include <stdio.h>
#define TAM 8 // constante
#define true 1
#define false 0

// Busca x a primeira ocorrência de x no vetor
int main() {
    int v[TAM] = {2, 4, -6, 8, -10, -12, -5, 0};
    
    int x = 12;
    int achei = false;
    for (int a = 0; a < TAM; a++) {
        if (x == v[a]) {
            achei = true;
            break;
        }
    }
    if (achei)
        printf("%d pertence ao vetor\n", x);
    else
        printf("%d não foi encontrado!\n", x);
    
    return 0;
}


// ------------------------------------------


#include <stdio.h>
#define TAM 8

int main() {
    int x[] = {0, 1, 1, 2, 3, 5, 8, 13};
    
    // Imprime todo o vetor da posição 0 até
    // a última posição
    for (int i = 0; i < TAM; i++) {
        printf("%d, ", x[i]);
    }
    
    return 0;
}


//---------------------------------------


#include <stdio.h>
#define TAM 5 // constante

int main() {
    int x[TAM];
    
    // Leitura do vetor
    for (int i = 0; i < TAM; i++) {
        printf("Valor da posição %d:", i);
        scanf("%d", &x[i]);
    }
    
    // Imprime todo o vetor do fim para o início
    for (int i = TAM - 1; i >= 0; i--) {
        printf("%d, ", x[i]);
    }
    
    return 0;
}


//---------------------------------------



#include <stdio.h>
#define TAM 6 // constante

int main() {
    int x[TAM] = {2, 4, 6, 8, 10, 12};
    
    float soma = 0.0;
    for (int i = 0; i < TAM; i++) {
        soma = soma + x[i];
    }
    float media = soma/TAM;
    printf("soma:%f\n", soma);
    printf("media:%f\n", media);
    
    return 0;
}



//-------------------------------------


#include <stdio.h>
#define TAM 8 // constante

int main() {
    //                  i
    int x[TAM] = {2, 4, -6, 8, -10, -12, -5, 0};
    
    for (int i = 0; i < TAM; i++) {
        if (x[i] < 0) {
            x[i] = -x[i];
        }
    }
    
    // Imprime vetor
    for (int i = 0; i < TAM; i++) {
        printf("%d, ", x[i]);
    }
    
    
    
    return 0;
}

