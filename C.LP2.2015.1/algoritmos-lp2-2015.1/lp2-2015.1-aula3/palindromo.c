#include <stdio.h>

int main(){
	
	int n;
	int m, c, d, u; 
	m = c = d = u = 0;
	
	printf("Informe um numero: ");
	scanf("%d",&n);
	
	if ((n >= 1000)&&(n <= 9999)){
		
		m = n / 1000;
		c = (n % 1000) / 100;
		d = ((n % 1000) % 100) / 10;
		u = ((n % 1000) % 100) % 10;
				
		if ((m == u)&&(c ==d)){
			printf("\n%d eh palindromo perfeito!",n);	
		} else {
			printf("\nO numero nao eh palindromo!");
		}
		
		
	} else {
		printf("Fora do intervalo!");
	}
	
	
	
	
	
	
	return 0;
}
