#include <stdio.h>

int main(){
	
	int ano;
	
	printf("Informe o ano: ");
	scanf("%d",&ano);
	
	if (ano > 0){
		if (ano % 400 == 0){
			printf("Ano Bissexto!");
		} else if ((ano % 4 == 0 )&&(ano %100 != 0)){
			printf("Ano Bissexto!");
		} else {
			printf("Ano nao eh bissexto!");
		}	
	} else {
		printf("Valor negativo informado!");
	}
	

	
	
	
	return 0;
}
