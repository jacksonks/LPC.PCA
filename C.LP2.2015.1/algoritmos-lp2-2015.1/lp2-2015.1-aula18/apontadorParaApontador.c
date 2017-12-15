#include <stdio.h>

int main(){
	
	int x = 43;
	int *p = &x;
	int **q = &p;
	
	printf("%x %x",p,&x);
	printf("\n%x %x",q,&p);
	
	printf("\nPor meio de p: %d",*p);
	printf("\nPor meio de q: %d",**q);
	
	**q = 29;
	printf("\nImpressao de %d",x);
	
	
	
	
	return 0;
}
