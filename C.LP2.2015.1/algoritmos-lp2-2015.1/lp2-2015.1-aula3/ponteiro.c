#include <stdio.h>


int main(){
	
	int x = 17;
	int y = 18;
	
	int *enderecoX = &x;
	
	printf("%d",x);
	printf("\n%p %p",&x, enderecoX);
	
	printf("\n\n Aqui: %d",*enderecoX);
	
	
}
