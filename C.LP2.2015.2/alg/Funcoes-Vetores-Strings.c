//
//  main.c
//  LP2_2015s2_Listas2

#include <stdio.h>
#include <stdlib.h>
#define bool int
#define true 1
#define false 0
// A = {1, 2, 3, 4}
// B = {3, 4, 5}
// U = {1, 2, 3, 4, 5}
// |U| = |A| + |B| - #repetidos


bool pertence(int k, int v[], int tam_v) {
    for (int i = 0; i < tam_v; ++i) {
        if (k == v[i]) {
            return true;
        }
    }
    return false;
}


int num_repetidos(int a[], int tam_a, int b[], int tam_b) {
    int cont = 0;
    for (int i = 0; i < tam_a; ++i) {
        if (pertence(a[i], b, tam_b)) {
            ++cont;
        }
    }
    return cont;
}


void uniao(int a[], int tam_a, int b[], int tam_b, int u[], int tam_u) {
    int j = 0;
    for (int i = 0; i < tam_a; ++i) {
        if (!pertence(a[i], u, tam_u)) {
            u[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < tam_b; ++i) {
        if (!pertence(b[i], u, tam_u)) {
            u[j] = b[i];
            j++;
        }
    }
}


void printConj(char *str, int u[], int tam_u) {
    printf("%s = {", str);
    for (int i = 0; i < tam_u - 1; ++i) {
        printf("%d, ", u[i]);
    }
    printf("%d}\n", u[tam_u - 1]);
}


int main() {
    int tam_a = 5;
    int a[] = {1, 2, 3, 4, 5};
    int tam_b = 3;
    int b[] = {3, 4, 5};
    int tam_u = tam_a + tam_b - num_repetidos(a, tam_a, b, tam_b);
    int *u = NULL;
    u = (int*) malloc(tam_u*sizeof(int));
    uniao(a, tam_a, b, tam_b, u, tam_u);
    printConj("A", a, tam_a);
    printConj("B", b, tam_b);
    printf("tam U:%d\n", tam_u);
    printConj("U", u, tam_u);
    free(u); // Liberar memória ocupada por u

    printf("\n");
    return 0;
}







//-----------------------------------------
#ifdef COMPILA

#include <stdio.h>
#include <string.h>
#define bool int
#define true 1
#define false 0

void printStr(char *nomes[], int tam) {
    for (int i = 0; i < tam; ++i) {
        printf("%s, ", nomes[i]);
    }
    printf("\n");
}


bool busca(char *nomes[], int tam, char *nome) {
    bool achou = false;
    for (int i = 0; i < tam; ++i) {
        if (strcmp(nome, nomes[i]) == 0) {
            achou = true;
            break;
        }
    }
    return achou;
}


int main() {
    int tam = 3;
    char *nomes[] = {"Suzana", "Cláudio", "Eike"};
    char *nomes2[2][2] = {{"Suzana", "Cláudio"},
        {"Ana", "Pedro"}};
    printStr(nomes, tam);
    char *nome = "Dudu";
    if (busca(nomes, tam, nome) == true) {
        printf("O nome está na lista\n");
    }
    else {
        printf("Nome não encontrado\n");
    }
    printf("\n");
    return 0;
}

#endif
