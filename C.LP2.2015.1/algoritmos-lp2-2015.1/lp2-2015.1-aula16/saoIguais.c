#include <stdio.h>
#include <stdbool.h>

_Bool saoIguais(char c1[], char c2[]){
	
	int i = 0;
	
	while ((c1[i]!= '\0')&&(c2[i] != '\0')){
		if (c1[i] != c2[i]){
			return false;
		}
		i++;
	}
	
	return true;
}

int main(){
	char c1[10] = "hello";
	char c2[10] = "hello";
	
	if (saoIguais(c1,c2)){
		printf("%s e %s sao iguais!",c1,c2);
	}
	
	return 0;
	
}




