#include <stdio.h>
#include <string.h>

int main(){
	
	char s1[] = "um exemplo de string";
	char s2[] = "mpl";
	char *p = strstr(s1,s2);
	
	if (p == NULL){
		printf("A substring nao existe na string");
	} else{
		// impressao de string por meio de ponteiro
		while (*p != '\0'){
			printf("%c ",*p);
			p++;
		}
	}
		
	
	
	
	
	return 0;
}
