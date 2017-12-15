#include <stdio.h>
#include <string.h>

int main(){
	
	char string[40];	
	char *p;
	
	fgets(string,40,stdin);
	p = string;
	
	// 1a maneira de iterar
	while (*p != '\0'){
		printf("%c ",*p);
		p++;
	}
	
	
	// 2a maneira de iterar
	printf("\nSegunda maneira de iterar: :");
	for (char *paux = string; *paux != '\0'; paux++){
		putchar(*paux);
	}
	
	
	
	
	
	
	
	return 0;
}
