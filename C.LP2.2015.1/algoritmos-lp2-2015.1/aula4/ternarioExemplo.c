#include <stdio.h>

int main(){
	
	int a = 8, b = 3;
	int c;
	
	(a > b) ? (c = a) : (c = b);
	
	printf("%d",c);
	
	return 0;
}
