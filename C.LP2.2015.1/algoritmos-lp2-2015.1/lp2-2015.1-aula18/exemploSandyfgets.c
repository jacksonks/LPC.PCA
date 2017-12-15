#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char s[30];
	char a = 'Z';
	fgets(s,30,stdin);
	printf("%d\n",strlen(s));
	puts(s);
	printf("----------------");
	printf("%d",islower(a));
	printf(" %d",isupper(a));
	
	
	return 0;
}
