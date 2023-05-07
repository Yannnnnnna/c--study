#include<stdio.h>

int main(void){
	
	int num;
	scanf("%d", &num);
	if (num % 2 == 0){
		printf("是偶数");
	}else {
		printf("是奇数");
	}
	return 0;
}