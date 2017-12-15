#include <stdio.h>
#include <string.h>

int tamanho(char s[]){
	int i = 0;
	while (s[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	
	char v[] = "elloa barreto";	
	printf("%d",tamanho("disto aqui!"));
	printf("\n%d %d",tamanho("123"),strlen("123"));
	printf("\n%d",tamanho(v));
	printf("\n%d %d",tamanho(""),strlen(""));
	
	return 0;
}
