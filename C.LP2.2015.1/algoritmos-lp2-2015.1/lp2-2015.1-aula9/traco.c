#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int m[10][10];
	int traco = 0;
	srand(time(NULL));
	
	for (int i =0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			m[i][j] = rand() % 20;
		}
	}
	
	// Impressao da matriz
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			printf("%2d ",m[i][j]);
		}
		printf("\n");
	}
	
	
	
	for (int i = 0; i < 10; i++){
		traco += m[i][i];
	}
	
	printf("O traco eh %d",traco);
	
	
	
	
	
	
	
}
