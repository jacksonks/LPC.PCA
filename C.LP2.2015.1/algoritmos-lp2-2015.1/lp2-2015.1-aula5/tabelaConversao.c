#include <stdio.h>

int main(){
	
	int limInf, limSup;
	int i;
	
	printf("Informe os limites: ");
	scanf("%d %d",&limInf,&limSup);
	
	i = limInf;
	
	while (i <= limSup){
		printf("%d \t %.2f\n",i,1.8*i + 32);
		
		i += 1;
	}
	
	
	
	
	
	return 0;
}
