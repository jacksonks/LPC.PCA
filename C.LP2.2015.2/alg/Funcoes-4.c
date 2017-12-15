//
//  main.c
//  LP2_2015s2_Funcoes_PassValor
//
//  Created by Coelho on 24/09/15.
//  Copyright (c) 2015 Flavio Jose Mendes Coelho. All rights reserved.
//

#include <stdio.h>
#define true 1
#define false 0
#define bool int

// Escreva uma função que recebe um inteiro positivo
// como parâmetro e retorne se este número é primo ou não.
//bool primo(int n) {
//    lógica do primo;
//    if (cont == 2)
//        return true;
//    else
//        return false;
//}


int main() {
//    if (primo(x) == true)
//        printf("");
//    else
//        printf(" ");
    
    printf("\n~~\n");
    return 0;
}






#ifdef COMPILA

#include <stdio.h>

int fat(int n) {
    int fatorial = 1;
    for(int i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
}

// C(n, k) = n!/k!(n-k)!
int comb(int n, int k) {
    return fat(n)/(fat(k)*fat(n - k));
}


int main() {
    int n = 13;
    int k = 2;
    printf("C(%d,%d) = %d\n", n, k, comb(n, k));
    
    printf("\n~~\n");
    return 0;
}



//------------------------------------------------------



#include <stdio.h>
#include <math.h>
#define TAM 10

// Escreva uma função que receba como parâmetro um vetor
// de inteiros e retorne o valor mínimo do vetor.
int minimo(int v[]) {
    int min = v[0];
    for(int i = 1; i < TAM; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}




int main() {
    int v[] = {5, 3, 1, 0, -6, -33, 2, 14, -99, -12};
    int x = minimo(v);
    printf("mínimo do vetor: %d\n", x);
    
    printf("\n~~\n");
    return 0;
}

//--------------------------------------------------

void imprimeMsg() {
    printf("Bom dia!\n");
}


//void parImpar(int x) {
//    if (x % 2 == 0) {
//        printf("%d é par", x);
//    }
//    else {
//        printf("%d é ímpar", x);
//    }
//}

// Retorna 1 se for par
// ou retorna 0 se não for (for ímpar)
int parImpar(int x) {
    if (x % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

// Faça uma função que receba como parâmetro um inteiro
// e imprime o seu fatorial.
void fatorial2(int n) {
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }
    printf("fatorial de %d = %d\n", n, fat);
}


int fatorial(int n) {
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat = fat * i;
    }
    return fat;
}


// Escreva uma função que receba os três coeficentes
// reais de uma equação do 2a. grau como parâmetros
// e imprima suas raízes reais ou imprima uma mensagem
// apropriada caso estas não sejam raízes reais.
void equacao2oGrau(float a, float b, float c) {
    float delta = powf(b, 2.0) - 4*a*c;
    if (delta >= 0.0) {
        float x1 = (-b + sqrtf(delta))/2*a;
        float x2 = (-b - sqrtf(delta))/2*a;
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    else {
        printf("Não existem raízes reais\n");
    }
}



int main() {
    float a = 2.0, b = 5.0, c = 1.0;
    equacao2oGrau(a, b, c);
    
    printf("\n~~\n");
    return 0;
}


int main() {
    int n = 13;
    int fat = fatorial(n);
    printf("fatorial de %d = %d\n", n, fat);

    printf("\n~~\n");
    return 0;
}


#endif
