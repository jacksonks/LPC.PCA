#include <stdio.h>
#include <string.h>
#include <stdbool.h>

_Bool ehIgual(char s1[], char s2[]){
	
	int i = 0;
	if (strlen(s1) != strlen(s2)){
		return 0;
	}
	
	while (s1[i] != '\0'){
		if (s1[i] != s2[i]){
			return 0;
		}	
		i++;
	}
	
	return 1;
	
	
	
	
	
}

int main(){
	
	char s1[] = "Uma frase";
	char s2[] = "Uma frasezzz";
	
	if (ehIgual(s1,s2)){
		printf("Sao iguais!");
	} else {
		printf("Sao diferentes!");
	}	
	
	
}
