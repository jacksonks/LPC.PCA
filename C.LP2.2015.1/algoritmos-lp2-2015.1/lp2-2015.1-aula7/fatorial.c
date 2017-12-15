#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int v[20], vFat[20];
	int fat;
	
	for (int i = 0; i <= 19; i++){
		v[i] = (rand() * 100) % 15;
	}
	
	for (int i =0; i <= 19; i++){
		fat = 1;
		for (int j =1; j <= v[i]; j++){
			fat *= j;
		}
		vFat[i] = fat;
	}
	
	
	for (int i =0; i <= 19; i++){
		printf("%d %d\n",v[i],vFat[i]);
	}
	
	
	
	
}
