#include <stdio.h>

int main(){
	
	int m, n;
	int ant, atual, prox;
	
	ant = 0;
	atual = 1;
	
	printf("Informe o intervalo: ");
	scanf("%d %d",&m,&n);
	
	while (ant <= n){
		prox = ant + atual;
		ant = atual;
		atual = prox;
		
		if ((ant >= m) && (ant <= n)){
			printf("%d\n", ant);
		}
		
	}
	
	
	
	
	return 0;
}
