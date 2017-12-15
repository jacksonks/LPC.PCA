#include <stdio.h>

int main(){
	
	
	int x = 17;
	int fat = 1;
	
	for (int i = 1; i <= x; i++){
		fat *= i;
	}
	
	printf("%d",fat);
	
	
}
