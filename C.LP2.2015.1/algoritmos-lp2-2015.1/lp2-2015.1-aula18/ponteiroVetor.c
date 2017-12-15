#include <stdio.h>

int main(){
	
	int vetor[4] = {6, 99, 72, 45};
	int *ponteiro;
	ponteiro = vetor;
	
	for (int i = 0; i < 4; i++){
		printf(" %d",*ponteiro);
		ponteiro++;
	}
	
	printf("\n");
	
	for (int i = 0; i < 4; i++){
		ponteiro = &vetor[i];
		printf(" %d",*ponteiro);
	}
	
	
	printf("\nImpressao do vetor com ponteiros: ");
	for (int *i = vetor; i <= &vetor[3];i++){
		printf("  %d",*i);
	}
	
	
	
	
	
	return 0;
}
