#include <stdio.h>
int fatorial(int n){
	
	int i,fat = 1;
	for (i = 1; i <= n; i++){
		fat *= i;
	}
	return fat;
	
}

void fatorial2(int n){
	
	int i,fat = 1;
	for (i = 1; i <= n; i++){
		fat *= i;
	}
	printf("%d",fat);
	
}

int main(){
	int d = fatorial(5);
	printf("%d",fatorial(3));
	printf("\n%d\n",d);
	
	fatorial2(0);
	
	return 0;
}
