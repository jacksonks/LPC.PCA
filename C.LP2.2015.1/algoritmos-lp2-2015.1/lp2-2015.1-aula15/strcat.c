#include <stdio.h>
#include <string.h>

int main(){
	
	char s[] = "uma frase";
	char s2[] = "outra frase";
	char s3[40];
	
	printf("%d\n",strlen(s2));
	 // strcat(s2,s);
	
	puts(s2);
	printf("%d\n",strlen(s2));
	
	puts(s);
	strcpy(s3,s);
	puts(s3);
	
	
	return 0;
}
