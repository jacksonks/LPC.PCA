#include <stdio.h>
#include <string.h>

int main(){
	
	char s[] = "alguma frase";
	char c = 'z';
	char *ptr;
	
	ptr = strchr(s,'a');
	
	if (ptr == NULL){
		printf("nao esta na string!");
	} else{
		puts(ptr);
	}
	
	
	
	return 0;
}
