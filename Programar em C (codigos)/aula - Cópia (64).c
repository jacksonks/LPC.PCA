#include<stdio.h>

int main (void)
{
	struct horario
	{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 20;
	depois->segundo = 20;
	
	int somatorio = 100;
	
	struct horario antes;
	
	antes.hora = somatorio * depois->segundo;
	antes.minuto = agora.hora + depois->minuto;
	
	printf("%d:%d:%d",antes.hora,antes.minuto,antes.segundo);
	
	getchar ();
	
	return 0;
}
