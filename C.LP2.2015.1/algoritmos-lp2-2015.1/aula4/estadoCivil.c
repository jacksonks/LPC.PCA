#include <stdio.h>

int main(){
	
	char estado;
	printf("Informe o estado civil: ");
	scanf("%c",&estado);
	
	
	switch (estado){
		case 'C': printf("Casado");
				  break;
		case 'D': printf("Divorciado");
				  break;
		case 'S': printf("Solteiro!");
				  break;
		case 'V': printf("Viuvo");
				  break;
		default: printf("Indefinido!");
				  break;
	}
	
	return 0;
}
