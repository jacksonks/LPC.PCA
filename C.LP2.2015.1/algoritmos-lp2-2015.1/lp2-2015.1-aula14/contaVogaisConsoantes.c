#include <stdio.h>
#include <string.h>

int main(){
	
	char s[60] = "abc      d    e   f   ghiljklm    opqrstuv  wxyz   ";
	int cVogal, cEspaco, cConsoantes;
	cVogal = cEspaco = 0;
	int i = 0;
	// scanf("%s",&s);
	
	
	while (s[i] != '\0'){
		
		if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i')||(s[i]== 'o')||(s[i] == 'u')){
			cVogal++;
		} else if (s[i]== ' '){
			cEspaco++;
		}
		i++;
		
	}
	
	cConsoantes = strlen(s) - cVogal - cEspaco;
	
	printf("A quantidade de vogais eh: %d",cVogal);
	printf("\nA quantidade de consoantes eh: %d",cConsoantes);
	
	
	
	
	
	
	
	
}
