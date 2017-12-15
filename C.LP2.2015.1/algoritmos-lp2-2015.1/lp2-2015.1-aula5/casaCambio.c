#include <stdio.h>

int main(){
	
	float valor, resultado;
	char moeda;
	
	printf("Valor: ");
	scanf("%f",&valor);
	
	printf("Moeda: ");
	fflush(stdin);
	scanf("%c",&moeda);
	// moeda = getchar();
	
	
	if (valor > 0) {
		
		switch (moeda){
			case 'E' : resultado = valor * 0.31;
					   printf("%.2f",resultado);
					   break;
			case 'D' : resultado = valor * 0.42;
					   printf("%.2f",resultado);
					   break;
			case 'M' : resultado = valor * 5.55;
					   printf("%.2f",resultado);
					   break;
			case 'A' : resultado = valor * 2.84;
					   printf("%.2f",resultado);
					   break;
			case 'L' : resultado = valor * 0.26;
					   printf("%.2f",resultado);
					   break;
			default : printf("Conversao Invalida!");
					  break;
			
		}
	} else {
		printf("Conversao Invalida!");
	}
	
	return 0;
}
