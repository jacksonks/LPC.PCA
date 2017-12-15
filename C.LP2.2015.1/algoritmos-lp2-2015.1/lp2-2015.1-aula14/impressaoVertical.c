#include <stdio.h>

int main(){
	
	char string[] = "Uma frase grande e trabalhosa termina sempre com o mesmo caractere!";
	int i = 0;
	char entrada[10];
	
	while (string[i] != '\0'){
		printf("%c\n",string[i]);
		i++;
	}
	
	i = 0;
	while (i < 10){
		entrada[i] = getchar();
		i++;
	}
	puts(entrada);
	
	
	
	return 0;
}
