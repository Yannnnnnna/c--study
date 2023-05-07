#include <stdio.h>
 
int main(void)
{	float a, b;
	printf("请输入两个浮点数：\n");

	scanf("%f %f", &a, &b);
	printf("你输入的两个浮点数为%f和%f\n", a, b);
	
	float temp = 0;
	
	temp = a;
	a = b;
	b =temp;
	printf("交换后输出的两个浮点数为%f, %f\n", a, b);
	
    return 0;
}