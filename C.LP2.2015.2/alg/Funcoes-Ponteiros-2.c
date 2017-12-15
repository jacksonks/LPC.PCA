//  LP2_2015s2_Ponteiros3
//  Created by Coelho on 12/11/15.

#include <stdio.h>
#include <stdlib.h>

void inverte(int v[], int tam) {
    int i = 0;
    int j = tam - 1;
    while (i < j) {
        int tmp = v[i];
        v[i] = v[j];
        v[j] = tmp;
        i++;
        j--;
    }
}


void print(int *v, int tam) {
    printf("{");
    for (int i = 0; i < tam - 1; i++) {
        printf("%d, ", v[i]);
    }
    printf("%d}\n", v[tam-1]);
}



int main() {
    int TAM = 0;
//    int v[TAM] = {0, 1, 1, 2, 3, 5, 8, 13};
    printf("Entre com o tmamanho do vetor:");
    scanf("%d", &TAM);
    int *v = (int*) malloc(TAM*sizeof(int));
    v[0] = 2;
    v[1] = 4;
    v[2] = 6;
    v[3] = 8;

    print(v, TAM);
    inverte(v, TAM);
    print(v, TAM);
    free(v);
    
    printf("\n");
    return 0;
}
