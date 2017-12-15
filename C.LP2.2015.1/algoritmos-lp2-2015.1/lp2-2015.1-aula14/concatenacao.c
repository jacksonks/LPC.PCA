#include <stdio.h>

void concatena(char s1[], char s2[], char s3[]){
	
	int i, aux, j;
	i = aux = j = 0;
	
	while (s1[i] != '\0'){
		s3[aux] = s1[i];
		i++;
		aux++;
	}
	
	while (s2[j] != '\0'){
		s3[aux] = s2[j];
		j++;
		aux++;
	}
	
	s3[aux] = '\0';
	
}


int main(){
	char hello[] = "Hello";
	char world[] = "World!!";
	char resposta[20];
	
	concatena(hello,world,resposta);
	
	puts(resposta);
	
	
	
}
