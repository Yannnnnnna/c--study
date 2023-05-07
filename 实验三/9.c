#include<stdio.h>

int main(void){
	
	int price;
	scanf("%d", &price);
	int tax = 0;
	if(price >= 10000){
		tax = price * 0.05;	
	}else if(price >= 5000 && price <10000){
		tax = price * 0.03;
	}else if(price >= 1000 && price < 5000){
		tax = price * 0.02;
	}else if (price < 1000){
		tax = 0;
	}
	printf("tax = %d", tax);
	return 0;
}