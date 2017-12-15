#include <stdio.h>

int main(){
	
	int r, g, b;
	printf("Informe três números: ");
	scanf("%d %d %d",&r,&g,&b);
	
	if ((r >= 0)&&(r <= 255)&&(g >= 0) && (g <= 255) &&
		 (b >= 0) &&(b <= 255)){
		// os três números estão no intervalo
		
		if ((r == 0)&&(g == 0)&&(b ==0)){
			printf("Preto!");
		} else if ((r == 255) &&(g == 255) && (b==255)){
			printf("Branco!");
		} else if ((r > g)&&(r > b)){
			printf("Vermelho!");
		} else if ((g > r) && (g > b)){
			printf("Verde!");
		} else if ((b > g) && (b > r)){
			printf("Azul!");
		} else {
			printf("Cinza!");
		}
		
			 	
	} else {
		printf("Fora do intervalo!");
		return 1;
	}
	
	
	return 0;
}
