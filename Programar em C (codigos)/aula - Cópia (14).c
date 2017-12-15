#include <stdio.h>

int main ()
{
	int idade;
	
	printf("informe a idade:\n");
	scanf("%i", &idade);
	
	if (idade < 18) {
		printf("bebidas alcoolicas nao estao liberadas.\n");
	} 
	else 
	{
		printf("bebidas alcoolicas estao liberadas.\n");
	}
	
	return 0;
}
