#include<stdio.h>
int main(void){
	
	int x, y;
	scanf("%d", &x);
	if(x < 1){
		y = x;
	}else if(x>=1 && x < 15){
		y = 2*x - 1;
	}else if(x >= 15){
		y = 6 * x + x * x;
	}
	printf("%d", y);
	return 0;
}