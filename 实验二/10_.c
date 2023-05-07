#include <stdio.h>
 
int main(void)
{	int day, week, number;
	printf("请输入天数：\n");
	scanf("%d", &number);
	week = number / 7;
	day = number % 7;
	
	printf("%d天是%d周%d天",number, week, day);
	
    return 0;
}