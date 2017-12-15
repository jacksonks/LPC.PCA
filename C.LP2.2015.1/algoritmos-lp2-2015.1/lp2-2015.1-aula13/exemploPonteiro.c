#include <stdio.h>

int main(){
	
	int a = 2, b = 3, c;
	int *p;
	int *q;
	p = &a;
	q = &b;
	c = *p + *q;
	printf("%d",c);
	
	return 0;
}
