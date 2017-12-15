#include <stdio.h>

void imprimeLinha(int n, char c){
	
	for (int i = 0; i < n; i++){
		printf("%c",c);
	}
	printf("\n");	
}

int main(){
	
	int num;
	char c1;
	
	// imprime linha
	imprimeLinha(20,'#');
	
	printf("Numeros de 1 a 5: \n");
	
	// imprime linha
	imprimeLinha(5,')');
	
	for (int i = 1; i <= 5; i++){
		printf("%d\n",i);
	}
	
	// imprime linha
	imprimeLinha(10,'$');
	
	printf("Informe a quantidade de símbolos e o caractere: ");
	scanf("%d", &num);
	fflush(stdin);
	scanf("%c",&c1);
	
	imprimeLinha(num,c1);
	return 0;
}
