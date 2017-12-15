#include <stdio.h>

int main(void)
{
	float calcular(float x,float y);
	
	float area = calcular(10.0,20.0);
	
	printf("a area eh : %f \n",area);
	
	
	return 0;
}

float calcular(float base,float altura)
{
	float area = base*altura;
	
	return area;
}
