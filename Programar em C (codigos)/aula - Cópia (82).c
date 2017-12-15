//Autor: Jackson Kelvin de Souza
//criando arquivo de testo simples
//cria o txt com os prints mas não o mostra
//"w"
#include <stdio.h>

int main(int argc,char const *argv[])
{
	FILE *file;
	file =fopen("agendav2.txt", "w");
	fprintf(file,"Codigo: 1515310012.\t");
	fprintf(file,"Nome: jackson kelvinde souza.\t");
	fprintf(file,"Endereco: 69017-330\t");
	fclose(file);
	
	return 0;
}
