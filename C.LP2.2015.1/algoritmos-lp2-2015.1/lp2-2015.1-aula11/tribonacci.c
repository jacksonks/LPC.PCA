#include <stdio.h>

int tribonacci(int n){
	int t0,t1,t2,t3;
	
	t0 = 0;
	t1 = 1;
	t2 = 1;
	
	for (int i = 1; i<=n; i++){
		t3 = t2 + t1 + t0;
		t0 = t1;
		t1 = t2;
		t2 = t3;
	}
	
	return t0;
	
}


int main(){
	
	int x;
	scanf("%d",&x);
	printf("Tribonacci: %d",tribonacci(x));
	
	return 0;
	
}
