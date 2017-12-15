#include<stdio.h>

int main (void)
{
	struct horario{
		int *ph;
		int *pm;
		int *ps;
	};
	
	struct horario hoje;
	
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.ph = &hora;
	hoje.pm = &minuto;
	hoje.ps= &segundo;
	
	printf("hora: %d\n",*hoje.ph);
	printf("minuto: %d\n",*hoje.pm);
	printf("segundo: %d\n",*hoje.ps);
	
	
	
	
	
	getchar ();
	
	return 0;
}
