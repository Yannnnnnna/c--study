#include<stdio.h>
#include <math.h>
int main(void){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%dx^2 + %dx + %d = 0\n",a,b,c);
	float dis = pow(b, 2) - 4.0*a*c;
	if(dis > 0){
		float result1,result2;
		result1 = (-b + sqrt(dis)) / 2.0*a;
		result2 = (-b - sqrt(dis)) / 2.0*a;
		printf("%f, %f", result1,result2);
	}else if(dis == 0){
		float result = (-b) /2.0*a;
		printf("%f", result);
	}else{
		printf("ÎÞÊµ¸ù");
	}
	
	return 0;
}