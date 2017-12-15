#include <stdio.h>

int main(){
	
	int a = 1;
	int b = 2;
	int aux;
	
	int *p, *q;
	
	printf("%d %d",a,b);
	p = &a;
	q = &b;
	
	aux = *p;
	*p = *q;
	*q = aux;
	
	printf("\n%d %d",a,b);
	
	
	
	
	
	return 0;
}
