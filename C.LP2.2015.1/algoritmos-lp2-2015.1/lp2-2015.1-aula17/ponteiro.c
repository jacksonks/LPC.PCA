#include <stdio.h>

int main(){
	
	int *ponteiro;
	int a = 17;
	
	ponteiro = &a;
	*ponteiro = 18;
	
	printf("%x %x",&a,ponteiro);
	printf("\n%d",a);
	printf("\n%d",*ponteiro);
		
	
	
	return 0;
}
