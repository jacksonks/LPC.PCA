//  main.c
//  LP_2015s2_Ponteiros1
//  Created by Coelho on 12/11/15.

#include <stdio.h>

int main() {

    int a = 123;
    printf("a:%d end.:%p\n", a, &a);

    int *ptr_a = NULL;
    ptr_a = &a;
    printf("ptr_a:%p end.:%p\n", ptr_a, &ptr_a);
    
    *ptr_a = 321;
    printf("modific. a:%d end.:%p\n", a, &a);
    
    
    
    
    printf("\n~\n");
    return 0;
}
