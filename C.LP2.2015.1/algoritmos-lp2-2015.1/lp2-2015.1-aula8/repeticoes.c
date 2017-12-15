#include <stdio.h>

int main(){
	
	int vet[10];
	int cont = 0;
	
	for (int i = 0; i <= 9; i++){
		scanf("%d",&vet[i]);
	}
	
	for (int i = 0; i <= 9; i++){
		printf("%d\n",vet[i]);
	}
	
	
	for (int i = 0; i<= 9; i++){
		
		cont = 0;
		for (int j = i + 1; j<= 9; j++){
			if (vet[i] == vet[j]){
				cont++;
			}
		}
		
		if (cont > 0){
			printf("%d repetiu!\n",vet[i]);
		}
		
	}
	
	
	
	return 0;
}
