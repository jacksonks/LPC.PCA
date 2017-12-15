#include <stdio.h>
#include <math.h>

int main(){
	
	int sinal = -1;
	float acum = 0;
	int fat;
	float x;
	
	printf("Informe o valor do angulo em radianos: ");
	scanf("%f",&x);
	
	for (int i = 1; i <= 39; i += 2){
		
		// Calcular i!
		fat = 1;
		for (int j = 1; j <= i; j++){
			fat = fat * j;
		} 
		
		
		sinal= sinal * (-1);
		acum += (sinal * pow(x,i)) / fat;
	}
	
	printf("Resposta: %.6f",acum);
	
	
	return 0;
}
