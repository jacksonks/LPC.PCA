//  main.c
//  LP2_2015s2_Ponteiros2
//  Created by Coelho on 12/11/15.

#include <stdio.h>
// Pass. param. por valor
void troca1(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;
}

// Pass. param. por referência
void troca2(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int a = 1, b = 2;
    printf("antes:\n a:%d  b:%d", a, b);
    troca2(&a, &b);
    printf("\ndepois:\n a:%d  b:%d", a, b);

    printf("\n~\n");
    return 0;
}
