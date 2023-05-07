#include<stdio.h>
int main(void){
	
	int x, y,option;
	scanf("%d %d", &x,&y);
	printf("请输入选择：\n");
	scanf("%d", &option);
	float result;
	switch(option){
		case 1:
			printf("做加法\n");
			result = x + y;
			break;
		case 2:	
			printf("做减法\n");
			result = x - y;
			break;
		case 3:	
			printf("做乘法\n");
			result = x * y * 1.0;
			break;
		case 4:	
			printf("做除法\n");
			result = x / y * 1.0;
			break;
				
	}
	printf("%f",result);
	
	return 0;
}