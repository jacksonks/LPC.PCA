//
//  main.c
//  LP2_2015s2_Listas
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define bool int
#define true 1
#define false 0


void imprimeVogais(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (tolower(s[i]) == 'a' ||
            tolower(s[i]) == 'e' ||
            tolower(s[i]) == 'i' ||
            tolower(s[i]) == 'o' ||
            tolower(s[i]) == 'u') {
            printf("%c, ", s[i]);
        }
        i++;
    }
}


void printStr(char *nomes[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%s, ", nomes[i]);
    }
}


void printStr2(char *nome) {
    printf("%s, ", nome);
}


int main() {
    
    bool achou = false;

    char msg[] = "Vou-me embora pra Itacoatiara!";
    imprimeVogais(msg);

    // vetor de strings
    char *nomes[] = {"Ana", "Bia", "Cacá"};
    char *nome = "Ana Clara";
    int tam = 3;
    printStr(nomes, tam);
    printStr2(nome);
    
    printf("\n");
    return 0;
}



//=========================================================
#ifdef COMPILA

#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 3

void soma(int a[][COL], int b[][COL], int c[][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            //cij = aij + bij
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void print(int m[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        // imprime linha
        for (int j = 0; j < COL; j++) {
            printf("%5d", m[i][j]);
        }
        printf("\n");
    }
}


int main(int argc, const char * argv[]) {
    int a[LIN][COL] = {{1, 2, 3},
        {3, 5, 6}};
    int b[LIN][COL] = {{1, 1, 1},
        {1, 1, 1}};
    int c[LIN][COL];
    soma(a, b, c);
    print(c);
    
    printf("\n");
    return 0;
}

#endif