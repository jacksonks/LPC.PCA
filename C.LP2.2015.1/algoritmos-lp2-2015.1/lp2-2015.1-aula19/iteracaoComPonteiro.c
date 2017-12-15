#include <stdio.h>

int main(){
	int v[] = {7, 2, 9, 4,  3, 1, 0};
	int *p = &v[0];
	int *fim = v + 7;
	int soma = 0;
	int *pSoma = &soma;
	
	// Primeira maneira de iterar
	for (int i = 0; i <= 6; i++){
		printf("%d ",*p);
		p = p + 1;
	}
	
	// Segunda maneira de iterar
	printf("\n");
	
	for (int *paux = &v[0]; paux < fim; paux++){
		printf("%d ",*paux);
	}
	
	
	// Iterando de tras para frente
	printf("\n");
	for (int *paux = fim -1; paux >= &v[0]; paux--){
		printf("%d ",*paux);
		*pSoma += *paux;
	}
	
	printf("\n Soma: %d",soma);
	
	
	
	
	return 0;
}
