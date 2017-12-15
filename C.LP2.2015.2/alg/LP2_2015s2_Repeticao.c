//
//  Aula sobre estruturas de repetição C
//  LP2_2015s2_Repeticao
//  Crie um programa para cada função main() abaixo delimitada por //---------------

#include <stdio.h>

int main() {
    for(int j = 1; j <= 10; j++) {
        printf("([%d], ", j);
        for(int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf(")\n");
    }
    
    return 0;
}


//---------------------------------


#ifdef COMPILA // não copie esta linha

#include <stdio.h>

// Aula 6 - laços aninhados, slide 34
int main() {
    for(int j = 1; j <= 10; j++) {
        printf("(%d, ", j);
        for(int i = 1; i <= 10; i++) {
            printf("%d ", i);
        }
        printf(")\n");
    }
    
    return 0;
}


//---------------------------------


#include <stdio.h>

// Contando de 1 a 10 com os três tipos de laços C.
int main(){
    // laço while: teste no início
    // laço while: executa 0, 1 ou + vezes
    printf("loop while: \t");
    int i = 1;
    while(i <= 10) {
        printf("%d, ", i);
        i++;
    }
    
    // laço do-while: teste no final
    // laço while: 1 ou + vezes
    printf("\nloop do-while: \t");
    int j = 1;
    do {
        printf("%d, ", j);
        j++;
    } while(j <= 10);
    
    // laço for: navegar por faixa de valores
    printf("\nloop for: \t");
    for(int i = 1; i <= 10; i++) {
        printf("%d, ", i);
    }
    
    return 0;
}


//---------------------------------


#include <stdio.h>

// Declarando, lendo e imprimindo uma string.
// string: cadeira ou sequência de caracteres
// delimitados por aspas (e implicitamente
// terminada com o caracter '\0').
int main(){
    //    char nome[] = "Ana Clara da Silva";
    int const TAM = 20;
    //    char nome[TAM] = "Ana Clara da Silva";
    char nome[TAM];
    printf("nome:");
    fgets(nome, TAM, stdin); // Lê a string do teclado
    printf("nome=%s", nome); // %s funciona para strings
    
    return 0;
}


//---------------------------------


#include <stdio.h>

// Loop for regressivo de 20 a 1 com passo 1
int main(){
    for(int i = 20; i >= 1; i--) {
        printf("%d, ", i);
    }
    
    return 0;
}


//---------------------------------


#include <stdio.h>


// Loop do-while de 1 a 10 com passo 1
int main(){
    int i = 1;
    do {
        printf("%d, ", i);
        i++;
    } while (i <= 10);
    return 0;
}


//---------------------------------


#include <stdio.h>

// Lê 10 valores não-negativos.
// A condição do while substitui um comando
// continue no if
int main(){
    int soma = 0, num = 0;
    int n = 1;
    while (n <= 10 && num >= 0) {
        printf("Entre com o valor:");
        scanf("%i",&num);
        if (num >= 0)
            soma += num;
    }
    printf("\nA soma é %i",soma);
    return 0;
    
    
}


//---------------------------------


#include <stdio.h>

// Imprime valores da faixa de valores [início, fim]Lê 10 valores não-negativos.
// A condição do while substitui um comando
// continue no comando if.
int main() {
    int fim = 20;
    const int k = 4;
    
    int inicio = 1;
    while(inicio <= fim) {
        printf("%d, ", inicio);
        inicio += k; // inicio = inicio + 2;
    }
    
    return 0;
}


//---------------------------------


#include <stdio.h>

// Loop while contando de 10 até 1, com passo -1.
int main() {
    int fim = 1;
    
    int inicio = 10;
    while(inicio >= fim) {
        printf("%d, ", inicio);
        inicio--;
    }
    
    return 0;
}


//---------------------------------


#include <stdio.h>

int main() {
    int n = 0;
    printf("n:");
    scanf("%d", &n);
    
    float valor = 0.0, soma = 0.0;
    int i = 1;
    while(i <= n) {
        printf("valor:");
        scanf("%f", &valor);
        soma = soma + valor;
        i++;
    }
    
    float media = soma/n;
    printf("media = %f", media);
    
    return 0;
}

#endif // não copie esta linha


