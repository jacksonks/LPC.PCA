#include <stdio.h>

int ehPalindroma(char s[]){
	int tam = 0;
	int i = 0;
	// Calcular o tamanho
	while (s[tam] != '\0'){
		tam++;
	}
	
	// Fazer as comparações
	while (i < tam/2){
		if (s[i] != s[tam - i - 1]){
			return 0;
		}
		i++;
	}
	
	return 1;
	
}




int main(){
	
	printf("%d",ehPalindroma("arara"));
	printf("\n%d",ehPalindroma("bola"));
	return 0;
}
