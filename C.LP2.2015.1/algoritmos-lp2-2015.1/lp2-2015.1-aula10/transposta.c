#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char m[3][2];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			m[i][j] = (rand() % 26) + 65;
			
		}
	}
	
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			printf("%c ",m[j][i]);
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}
