//
//  main.c
//  LP2_Lista2

#include <stdio.h>
#include <math.h>

// Exercício 8
int main() {

    float a = 0.0, b = 0.0, c = 0.0;
//    printf("Entre com o 1o. coeficiente:");
//    scanf("%f", &a);
//    printf("Entre com o 2o. coeficiente:");
//    scanf("%f", &b);
//    printf("Entre com o 3o. coeficiente:");
//    scanf("%f", &c);

    //    float x1, x2;
//    a = 1.0, b = -10.0, c = 24.0;
    a = 2.0, b = -10.0, c = 24.0;
    float delta = powf(b, 2.0) - 4*a*c;
    if (delta > 0.0) {
        float x1 = (-b + sqrtf(delta))/2.0*a;
        float x2 = (-b - sqrtf(delta))/2.0*a;
        printf("x1 = %f, x2 = %f", x1, x2);
    }
    else
        printf("Não existem raízes reais");

    return 0;
}


/*
 // Exercício 6 - ver. 2
 int main() {
 int a = 0, b = 0, c = 0;
 printf("Entre com o 1o. valor:");
 scanf("%d", &a);
 printf("Entre com o 2o. valor:");
 scanf("%d", &b);
 printf("Entre com o 3o. valor:");
 scanf("%d", &c);
 
 if (a < b && b < c) {
 printf("%d, %d, %d", a, b, c);
 }
 if (a < c && c < b) {
 printf("%d, %d, %d", a, c, b);
 }
 else if (b < a && a < c) {
 printf("%d, %d, %d", b, a, c);
 }
 else if (b < c && c < a) {
 printf("%d, %d, %d", b, c, a);
 }
 else if (c < a && a < b) {
 printf("%d, %d, %d", c, a, b);
 }
 else if (c < b && b < a) {
 printf("%d, %d, %d", c, b, a);
 }
 
 return 0;
 }
 
 */


/*
 // Exercício 6 - ver. 1
 int main() {
 //    int a = 1, b = 2, c = 3;
 //    int a = 1, b = 3, c = 2;
 //    int a = 2, b = 1, c = 3;
 int a = 0, b = 0, c = 0;
 printf("Entre com o 1o. valor:");
 scanf("%d", &a);
 printf("Entre com o 2o. valor:");
 scanf("%d", &b);
 printf("Entre com o 3o. valor:");
 scanf("%d", &c);
 
 if (a < b && a < c) {
 printf("%d, ", a);
 if (b < c) {
 printf("%d, ", b);
 printf("%d", c);
 }
 else {
 printf("%d, ", c);
 printf("%d", b);
 }
 }
 else if (b < a && b < c) {
 printf("%d, ", b);
 if (a < c) {
 printf("%d, ", a);
 printf("%d", c);
 }
 else {
 printf("%d, ", c);
 printf("%d", a);
 }
 }
 else {
 printf("%d, ", c);
 if (b < a) {
 printf("%d, ", b);
 printf("%d", a);
 }
 else {
 printf("%d, ", a);
 printf("%d", b);
 }
 }
 
 return 0;
 }
 
 */
