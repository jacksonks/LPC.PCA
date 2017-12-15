int incrementa(int x){
	x = x + 1;
	return x;
}

int main(){
	
	int x = 0;
	int y;
	
	printf("%d",x);
	y = incrementa(x);
	printf("\n%d %d",x,y);
	
}
