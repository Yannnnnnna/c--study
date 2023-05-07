#include<stdio.h>
int main(void){
	
	int num1,num2;
	scanf("%d %d", &num1,&num2);
	if(num2 == 0){
		printf("余数不能为零\n");
	}else{
		float quotient = 1.0 * num1 / num2;
		int remainder = num1 % num2;
		printf("商数为%f, 余数为%d\n",quotient,remainder );
	}
	
	return 0;
}