#include <stdio.h>

int main(){
	int m[100][100];
	int v[5000];
	int indice = 0;
	
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			scanf("%d",&m[i][j]);
		}
	}
	
	for (int i = 0; i < 100; i+= 2){
		for (int j = 0; j < 100; j++){
			
			if (m[i][j] % 5 == 0){
				v[indice] = m[i][j];
				indice++;
			}
			
		}
	}
	
	for (int i = 0; i < indice; i++){
		printf("%d",v[i]);
	}
	

	return 0;
}
