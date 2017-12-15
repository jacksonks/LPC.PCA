#include <stdio.h>
#include <string.h>

int main(){
	
	char *semana[] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", NULL};
	char **i = semana;
	char *p;
	
	while (*i){
		p = *i;
		
		while (*p != '\0'){
			printf(" %c",*p);
			p++;
		}	
		
		i++;
		printf("\n");
	}
	
	return 0;
}
