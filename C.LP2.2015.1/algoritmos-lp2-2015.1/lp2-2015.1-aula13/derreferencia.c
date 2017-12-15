#include <stdio.h>

int main(){
	
	int* p;
	int x = 99;
	p = &x;
	
	printf("%x",&x);
	printf("\n%x",p);
	printf("\n%x",&p);
	
	return 0;
}
