#include<stdio.h>
#include <math.h>
int main(void){
	
	int x, y;
	double z;
	scanf("%d %d", &x, &y);
	if(x > 0 && y > 0){
		z = log(x) + log(y);
		
	}else if(x < 0 && y > 0){
		z = sin(x) + sin(y);
	}else if(x < 0 && y < 0){
		z = exp(2 * x) + exp(3 * x);
	}else if(x > 0 && y < 0){
		z = sin(x + y) / cos(x + y);
	}
	printf("%lf", z);
	return 0;
}