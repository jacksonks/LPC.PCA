//
//  main.c
//  LP2 - 2015s2 - Strings
#include <stdio.h>
#include <string.h>
#include <ctype.h> // tolower, toupper, etc.

// Escreva uma função que recebe uma string
// e um caracter x é retorne quantos
// caracteres x existem na string.
int contaCaracter(char str[], char x) {
    int cont = 0;
    int i = 0; // tolower
    while (str[i] != '\0') {
        if (toupper(str[i]) == toupper(x)) {
            cont++;
        }
        i++;
    }
    return cont;
}


//Fatorial
int fat(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod = prod*i;
    }
    return prod;
}


// Retorna um vetor de inteiros
int* f(int a[], int b[], int tam) {
    for (int i = 0; i < tam; i++) {
        a[i] = b[i];
    }
    return a;
}


int main() {
    int n = 6;
    printf("fat de %d", fat(n));
    const int TAM = 30;
    char str[] = "asasdasdas";
    char a[TAM] = "Ana da Silva";
    char b[TAM];
    
    strcpy(b, a);
    strcat(b, "abc");
    puts(b);
    
    printf("%u %u\n", strlen(a), strlen(b));
    if (strcmp(a, b) == 0) {
        puts("Strings iguais!");
    }
    else if (a > b) {
        puts("a > b!");
    }
    else {
        puts("a < b!");
    }
    printf("no. de letras a da str:%d", contaCaracter(a, 'a'));

    printf("\n~\n");
    return 0;
}