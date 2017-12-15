#include<stdio.h>

int main (void)
{
	int x = 10;
	
	int *p; /*ponteiro*/
	p = &x; /*ponteiro*/ 
	
	printf("%i %i \n", *p , p);
	//*p acessa valor da varialvel
	//p acessa endereço de memoria da varialvel
	getchar ();
	
	return 0;
}
