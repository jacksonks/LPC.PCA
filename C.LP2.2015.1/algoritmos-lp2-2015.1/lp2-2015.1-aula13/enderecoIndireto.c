#include <stdio.h>

int main(){
	
	int n = 150;
	int *p = &n;
	printf("%d",*p);
	*p = 0;
	printf("\n%d",n);
	
	
	return 0;
}
