#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int v[15];
	char c[15];
	srand(time(NULL));
	
	for (int i = 0; i < 15; i++){
		v[i] = rand() % 12;
		c[i] = (rand() % 26) + 65;
	}
	
	for (int i = 0; i < 15; i++){
		printf("%2d %c\n",v[i],c[i]);
	}
	
	
	for (int i = 0; i < 15; i++){
		
		// Imprimir c[i] v[i] vezes
		for (int j = 0; j < v[i]; j++){
			printf("%c",c[i]);
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}
