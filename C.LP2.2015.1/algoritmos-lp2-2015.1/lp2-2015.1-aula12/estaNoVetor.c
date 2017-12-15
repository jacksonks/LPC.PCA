#include <stdio.h>
#include <stdbool.h>


_Bool estaNoVetor(int v[], int tam, int m){
	_Bool achou = 0;
	for (int i = 0; i < tam; i++){
		if (v[i] == m){
			achou = 1;
		} 
	}
	return achou;
}



int main(){
	
	int v1[10], v2[5] = {4, 5, 9,8,0};
	int n1 = 10;
	int n2 = 5;
	int m;
	
	for (int i = 0; i < n1; i++){
		scanf("%d",&v1[i]);
	}
	
	printf("Informe um numero: ");
	scanf("%d",&m);
	
	if (estaNoVetor(v1,n1,m)) {
		printf("Esta no vetor!");
	} else {
		printf("Nao esta no vetor!");
	}
	
	return 0;	
	
	
}


