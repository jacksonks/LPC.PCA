#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int m[7][7];
	int linha;
	srand(time(NULL));
	
	for (int i =0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			m[i][j] = rand() % 20;
		}
	}
	
	// Impressao da matriz
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			printf("%2d ",m[i][j]);
		}
		printf("\n");
	}
	
	printf("Informe a linha a ser fixada: ");
	scanf("%d",&linha);
	
	for (int j = 0; j < 7; j++){
		printf("%d ",m[linha][j]);
	}
	
	
	return 0;
}
