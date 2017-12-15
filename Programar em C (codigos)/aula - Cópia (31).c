#include <stdio.h>
int main()
{
	void teste(void);
	
	teste();
	teste();
	teste();

	return 0;
}
void teste(void)
{
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelEstatisca = 2;
	variavelEstatisca *= 2;
	
	printf("variavelLocalAutomatica: %d\n",variavelLocalAutomatica);
	printf("variavelEstatisca: %d\n",variavelEstatisca);
}
