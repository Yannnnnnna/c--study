#include <stdio.h>
 
int main(void)
{	int day, week, number;
	printf("������������\n");
	scanf("%d", &number);
	week = number / 7;
	day = number % 7;
	
	printf("%d����%d��%d��",number, week, day);
	
    return 0;
}