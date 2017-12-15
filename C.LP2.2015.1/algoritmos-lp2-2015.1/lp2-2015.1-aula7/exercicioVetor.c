#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int v[10];
	int chave;
	_Bool encontrou;
	
	for (int i = 0; i <= 9; i++){
		printf("v[%d]: ",i);
		scanf("%d",&v[i]);
	}
	
	
	for (int i = 0; i <= 9; i++){
		printf("v[%d]: %d\n",i,v[i]);
	}
	
	// Busca sequencial
	printf("Informe a chave: ");
	scanf("%d",&chave);
	
	encontrou = 0;
	for (int i =0; i <= 9; i++){
		if (v[i] == chave){
			encontrou = 1;
		}
	}
	
	if (encontrou){
		printf("A chave esta no vetor!");
	} else {
		printf("A chave nao esta no vetor!");
	}
	
	
	
	
	return 0;
}
