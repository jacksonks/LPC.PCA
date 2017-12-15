#include <stdio.h>

int main(){
	
	int m[100][100];
	int vp[5000], vi[5000];
	int indice1 = 0;
	int indice2 = 0;
	
	for (int i =0; i < 100; i++){
		for (int j =0 ; j < 100; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for (int i =0; i < 100; i += 2){
		for (int j = 0; j < 100; j++){
			if (m[i][j] % 2  != 0){
				vi[indice1] = m[i][j];
				indice1++;
				m[i][j] = 2;
				
			}
			
		}
	}
	
	for (int i = 1; i < 100; i += 2){
		for (int j = 0; j < 100; j++){
			if (m[i][j] % 2  == 0){
				vp[indice2] = m[i][j];
				indice2++;
				m[i][j] = 1;
				
			}
			
		}
	}
	
	// Impressao da matriz
	for (int i =0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			printf("%2d",m[i][j]);
		}
		printf("\n");
	}
	
	// Impressao dos vetores
	for (int i =0; i < indice1; i++){
		printf("%d",vi[i]);
	}
	
	for (int i =0; i < indice2; i++){
		printf("%d",vp[i]);
	}
	
	
	
	
	
	return 0;
}
