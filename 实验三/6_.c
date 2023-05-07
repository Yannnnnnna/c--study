#include<stdio.h>
int main(void){
	
	int a, b ,c;
	printf("请按从小到大输入三角形的三边\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a + b > c){
		printf("yes");
		if (a * a + b * b == c * c){
			printf("是直角三角形\n");
			if(a == b){
				printf("是等腰三角形\n");
			}
		}
	}else {
		printf("不能组成三角形\n");
	}
	
	return 0;
}