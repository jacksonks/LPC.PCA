//
//  main.c
//  LP2_2015s2_Funcoes_TopDown
//
//  Created by Coelho on 29/10/15.
//  Copyright © 2015 Flavio Jose Mendes Coelho. All rights reserved.
//


#include <stdio.h>
#include <ctype.h>

void limpaCozinha() {
    printf("  Cozinha: Lavando a louça...\n");
    printf("  Cozinha: Limpando o fogão...\n");
    printf("  Cozinha: Limpando a mesa...\n");
}

void limpaSala() {
    printf("  Sala: Limpando a sala...\n");
}

void limpaQuarto( int q ) {
    printf("  Quarto%d: Limpando o quarto %d...\n", q, q);
}


void limpaQuartos() {
    int numQuartos = 3;
    for (int q = 1; q <= numQuartos; q++) {
        limpaQuarto(q);
    }
}

void limpaBanheiro() {
    printf("  Banheiro: Lavando o banheiro...\n");
}


void limpaDentroCasa() {
    printf("Dentro de casa:\n");
    limpaCozinha();
    limpaSala();
    limpaQuartos();
    limpaBanheiro();
}


void varrer() {
    printf("  Varrendo...\n");
}

void lavar() {
    printf("  Lavando...\n");
}

void regarPlantas() {
    printf("  Regando as plantas...\n");
}

void darBanhoNoCachorro() {
    printf("  Dando banho no cachorro...\n");
}

void limpaPatio() {
    printf("No pátio:\n");
    varrer();
    lavar();
    regarPlantas();
    darBanhoNoCachorro();
}


// Aula sobre Funções/Refinamentos sucessivos
int main(int argc, const char * argv[]) {
    // Limpar uma casa
    printf("Limpando a casa:\n");
    limpaDentroCasa();
    limpaPatio();

    printf("\n_\n");
    return 0;
}
