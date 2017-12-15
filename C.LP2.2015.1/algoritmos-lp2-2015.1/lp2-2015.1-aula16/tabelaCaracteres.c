#include <stdio.h>

void tabela(char s[]){
	
	char letras[26];
	int cont[26];
	int j = 0;
	
	for (int i = 'a'; i <= 'z';i++){
		letras[j] = i;
		cont[j] = 0;
		j++;
	}
	
	j = 0;
	while (s[j] != '\0'){
		
		for (int i =0; i < 26; i++){
			if (s[j] == letras[i]){
				cont[i] = cont[i]+ 1;
			}
		}
		
		j++;
	}	
	
	for (int i =0; i< 26; i++){
		if (cont[i] != 0){
			printf("%c %i\n",letras[i],cont[i]);
		}
	}
	
	
}

int main(){
	
	tabela("the quick brown fox jumps over the lazy dog");
	
	return 0;
}
