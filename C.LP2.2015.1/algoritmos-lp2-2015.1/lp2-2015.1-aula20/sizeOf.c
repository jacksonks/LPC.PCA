#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tam;
	int *v;
	
	printf("Quantidade de numeros a serem lidos: ");	
	scanf("%d",&tam);
	
	v = (int*)malloc(tam*sizeof(int));
	
	if (v == NULL){
		printf("Erro na alocacao!");
		return 1;
	} else{
		
		printf("\nLeitura dos numeros:");
		
		for (int i = 0; i < tam; i++){
			scanf("%d",&v[i]);
		}
		
		printf("Impressao do vetor: ");
		for (int i = 0; i < tam; i++){
			printf("\n%d ",v[i]);
		}
		
		free(v);
		
		
		
	}
	
	
	return 0;
	
}
