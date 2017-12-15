#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int v[15];
	srand(time(NULL));
	int j,k = 14;
	int aux;
	
	for (int i = 0; i < 15; i++){
		v[i] = rand() % 100;	
	}
	
	// Impressao antes
	printf("Vetor antes: ");
	for (int i = 0; i < 15; i++){
		printf("%d ",v[i]);
	}
	
	// Inversao
	for (int j = 0; j < 15/2; j++){
		aux = v[j];
		v[j] = v[k];
		v[k] = aux;
		
		k--;
	}
	
	// Impressao depois
	printf("\nVetor depois: ");
	for (int i = 0; i < 15; i++){
		printf("%d ",v[i]);
	}
	
	
	
}
