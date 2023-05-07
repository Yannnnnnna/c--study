#include<stdio.h>

int main(void){
	
	int number;
	scanf("%d", &number);
	if(number % 2 == 0 && number % 3 == 0 && number % 5 == 0){
		printf("It can be divide by 2,3,5");
	}else {
		printf("It can't be divide by 2,3,5");
	}
	return 0;
}