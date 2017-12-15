#include <stdio.h>

int main()
{

	float notas[5] = {0};
	float total = 0;
	float media = 0;
	int i;
	
	printf("insira 5 notas:\n");
	
	for (i = 0 ; i < 5; ++i)
	{
		scanf("%f", &notas[i]);
	}
			
	for (i = 0 ;i < 5; ++i)
	{
		total += notas[i];
	}
		
	media = total / 5;
	printf("media: %.2f \n",media);
	
	return 0;
}
