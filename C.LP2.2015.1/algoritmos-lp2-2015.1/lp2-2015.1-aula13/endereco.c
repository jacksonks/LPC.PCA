#include <stdio.h>


void exemplo(){
	int x = 100;
	printf("\nX da funcao: %d %p",x,&x);
}

int main(){
	
	int x = 3;
	
	printf("%d\n",x);
	printf("%p",&x);
	
	
	x = 4;
	
	printf("\n%d\n",x);
	printf("%p",&x);
	
	exemplo();
	
	return 0;
}
