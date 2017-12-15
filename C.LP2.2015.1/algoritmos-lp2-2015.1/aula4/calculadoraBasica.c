#include <stdio.h>

int main(){
	
	float valor1, valor2, result;
	char op;
	scanf("%f %c %f",&valor1,&op,&valor2);
	
	switch (op){
		case '+' : result = valor1 + valor2;
					printf("%f",result);
					break;
		case '-': result = valor1 - valor2;
					printf("%f",result);
					break;
		case '*': result = valor1 * valor2;
					printf("%f",result);
					break;
		case '/': if (valor2 == 0){
					printf("Impossivel dividir por zero!");
				  } else {
				  	result = valor1 / valor2;
					printf("%f",result);
				  }
				  break;
		default : printf("Operacao Invalida!");
				  break;

	}
	
	
	return 0;
}
