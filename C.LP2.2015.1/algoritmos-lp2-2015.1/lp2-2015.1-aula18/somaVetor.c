#include <stdio.h>

int main(){
	
	int vet[10] = {8, 9, 7, 5, 6, 4, 2, 3, 1, 0};
	int *final = &vet[9];
	int *inicio = vet;
	int soma = 0;
	int *pSoma = &soma;
	
	for (int *i=final; i >= inicio; i--){
		*pSoma += *i;
	}
	
	printf("Soma dos elementos: %d",*pSoma);
	
	
	
	
	return 0;
}
