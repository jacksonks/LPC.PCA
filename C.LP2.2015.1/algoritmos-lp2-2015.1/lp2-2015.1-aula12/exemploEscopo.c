#include <stdio.h>

int funcao(int a){
	a = a + 20;
	printf("%d ",a);
	return a;
	
}

int main(){
	
	int a = 90;
	int y;
	
	y = funcao(a);
	printf("\nValor de a: %d",a);
	printf("\nO retorno da funcao foi: %d",y);
	return 0;
}
