#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char s[80];
	int i = 0;
	
	fgets(s,80,stdin);
	
	while (s[i] != '\0'){
		
		if (i % 2 == 0){
			printf("%c",upper(s[i]));
		} else {
			printf("%c",lower(s[i]));
		}
		
		i++;
	}
	
	
	
	
	return 0;
}
