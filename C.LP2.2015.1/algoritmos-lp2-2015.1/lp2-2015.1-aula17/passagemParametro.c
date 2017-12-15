#include <stdio.h>

void funcao(int x){
	x += 1;
}

void funcao2(int *ptr){
	*ptr = *ptr + 1;
	
}


int main(){
	
	int a = 199;
	int *p;
	funcao(a);
	printf("%d",a);
	
	p = &a;
	
	funcao2(&a);
	printf("\n%d",a);
	
	
	return 0;
}
