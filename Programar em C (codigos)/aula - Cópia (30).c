#include <stdio.h>
int main()
{
	void teste(void);
	
	teste();
	teste();
	
	return 0;
}
void teste(void)
{
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	printf("%d\n",variavelLocalAutomatica);
}
