#include <stdio.h>

void leitura(int m[5][5], int tam){

	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
}

void troca(int m[5][5],int tam, int y){
	
	for (int i = 0; i < tam; i++){
		m[i][i] = y;
	}
	
	
}

void imprime(int m[5][5], int tam){
	
	for (int i = 0; i < tam; i++){
		for (int j = 0; j < tam; j++){
			printf("%2d ", m[i][j]);
		}
		printf("\n");
	}
	
}


int main(){
	
	int m[5][5];
	int tam = 5;
	int y;
	
	leitura(m,tam);
	
	printf("Informe o valor de y: ");
	scanf("%d",&y);
	
	troca(m,tam,y);
	imprime(m, tam);
	
}



