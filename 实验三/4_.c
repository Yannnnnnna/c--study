#include<stdio.h>
int main(void){
	
	int num1,num2;
	scanf("%d %d", &num1,&num2);
	if(num2 == 0){
		printf("��������Ϊ��\n");
	}else{
		float quotient = 1.0 * num1 / num2;
		int remainder = num1 % num2;
		printf("����Ϊ%f, ����Ϊ%d\n",quotient,remainder );
	}
	
	return 0;
}