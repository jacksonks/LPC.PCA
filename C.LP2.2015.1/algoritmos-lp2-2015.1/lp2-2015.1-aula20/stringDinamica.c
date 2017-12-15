#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int tam;
	char *string;
	
	printf("Quantidade de caracteres a serem lidos: ");	
	scanf("%d",&tam);
	
	string = (char*)malloc(tam*sizeof(char));
	
	if (string == NULL){
		return 1;
	} else{
		
		fflush(stdin);
		printf("Leitura da string: ");
		fgets(string,tam,stdin);
		
		puts(string);
		printf("%d",strlen(string));
		
		free(string);
		
	}
	
	
	
	
	
}
