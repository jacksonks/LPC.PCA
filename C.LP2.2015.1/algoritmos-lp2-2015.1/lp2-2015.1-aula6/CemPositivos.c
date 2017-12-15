#include <stdio.h>

int main(){
	
	int cont = 0;
	int x, maior;
	int acum = 0;
	int contDiv = 0;
	
	// Ler o primeiro numero positivo
	do {
		scanf("%d",&x);
	} while (x  < 0);
	
	maior = x;
	cont++;
	
	while (cont <= 99){
		scanf("%d",&x);
		if (x >= 0){
			cont++;
			if (x > maior){
				maior = x;
			}	
		}
	}
	
	
	for (int i = 1; i < maior; i++){
		if (maior % i == 0){
			acum += i;
			contDiv += 1;
		}
	}
	
	printf("A quantidade de divisores eh %d\n",contDiv);
	
	if (acum > maior){
		printf("Abundante!");
	} else if (acum == maior){
		printf("Perfeito!");
	} else {
		printf("Defectivo!");
	}
	
	
	
	
	return 0;
}
