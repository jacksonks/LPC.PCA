#include <stdio.h>

int troca(int *i, int *j){
	int *temp;
	*temp = *i;
	*i = *j;
	*j = *temp;
	
}


int main(){
	
	int a = 0, b = 1;
	
	printf("x: %d  y: %d",a,b);
	troca(&a,&b);
	printf("\nx: %d  y: %d",a,b);
	
	return 0;
}
