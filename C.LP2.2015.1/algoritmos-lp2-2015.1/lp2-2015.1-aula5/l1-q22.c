#include <stdio.h>
#include <math.h>

int main(){
	
	int i;
	int c, d, u;
	
	i = 100;
	while (i <= 999){
		
		c = i / 100;
		d = (i % 100) / 10;
		u = (i % 100) % 10;
		
		if (pow(c,3) + pow(d,3) + pow(u,3) == i){
			printf("%d\n",i);
		}
		
		
		
		i += 1;
	}
	
	
	
	return 0;
}
