#include<stdio.h>

int main ()
{
	int idade = 20;
	int mae = 40;
	int pai = 50;
	int irmao = 18;
	
	int total4 = idade + mae + pai + irmao;
	int total3 = idade * mae * pai * irmao;
	int total2 = idade - mae - pai - irmao;
	int total1 = idade / mae / pai / irmao;
	
	
	printf("%i",total4);
	
	return 0;
}
