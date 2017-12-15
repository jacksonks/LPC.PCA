#include <stdio.h>

int main(){
	
	int vet[15];
	int ant, atual, prox;
	
	ant = 0;
	atual = 1;
	
	for (int i = 0; i < 15; i++){
		vet[i] = ant;
		
		prox = ant + atual;
		ant = atual;
		atual = prox;		
	}
	
	
	for (int i = 0; i < 15; i++){
		printf("%d\n",vet[i]);
	}
	
	
	
	
	return 0;
}
