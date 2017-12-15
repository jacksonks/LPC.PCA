#include<stdio.h>

int main (void)
{
	int x = 10;
	double y = 20.50;
	char z = 'a' ;
	//int *px;//
	//px = &x;//para accesar endereço da variavel apontada

	int *px = &x; // para acessar o valor da variavel apontada
	double *py = &y;
	char *pz = &z;
	
	double soma  = *px + *py;
	//double soma  = px + py;//nao epossivel
	int *r;
	r=2293408 ;
	
	printf("endereco x = %d - valor x= %d\n", px,*px);
	printf("endereco y = %d - valor y= %f\n", py,*py);
	printf("endereco z = %d - valor z= %c\n", pz,*pz);
	
	printf("valor da soma = %f \n", soma);
	printf("valor de xr = %d\n", *r);
	
	getchar ();
	
	return 0;
}
