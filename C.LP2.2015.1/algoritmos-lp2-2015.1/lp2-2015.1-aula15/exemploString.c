#include <stdio.h>
#include <string.h>

int main(){
	
	char s[30];
	char ch;
	
	fgets(s,30,stdin);
	puts(s);
	
	fflush(stdin);
	ch = getchar();
	putchar(ch);
	
	return 0;
}
