#include <stdio.h>

int main(){
	
	int x = 43;
	int **q; // faltou inicializar!
	**q = 29;
	printf("%d",x);
	
	return 0;
}
