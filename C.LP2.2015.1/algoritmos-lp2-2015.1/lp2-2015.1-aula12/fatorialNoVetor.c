#include <stdio.h>

int fatorial(int n){
	int fat = 1;
	for (int i = 1; i <= n; i++){
		fat *= i;
	}
	return fat;
}

void fatorialNoVetor(int v[], int n){
	
	for (int i = 0; i < n; i++){
		v[i] = fatorial(v[i]);
	}
	
	
}



int main(){
	
	int v[4] = {4, 2, 1, 0};
	fatorialNoVetor(v,4);
	for (int i = 0; i < 4; i++){
		printf("%d\n",v[i]);
	}
	
	
	
}
