#include <stdio.h>

void troca(int a, int b){
	int aux;
	aux = a;
	a = b;
	b = aux;
}

void troca2(int* a, int* b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	
	int x = 3;
	int y = 5;
	
	printf("x: %d  y: %d",x,y);
	troca2(&x,&y);
	printf("\nx: %d  y: %d",x,y);
	
	
	return 0;
}
