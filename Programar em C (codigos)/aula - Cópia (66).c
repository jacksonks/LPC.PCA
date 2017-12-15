#include <stdio.h>

int main (void)

{
	void testevariavel(int x);
	void testeponteiro(int *px);
	int teste=1;
	int *pteste = &teste;
	
	testevariavel(pteste);
	testeponteiro(pteste);
	
	printf("%d\n", teste);
	
	getchar();
	return 0;
}
void testevariavel (int x)
{
	++x;
}
void testeponteiro (int *px)
{
	++*px;
}
