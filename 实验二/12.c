#include <stdio.h>
 
int main(void)
{	int year, month, day;
	printf("请输入年月日：\n");
	scanf("%d %d %d", &year, &month, &day);
	printf("%d 年|%d 月|%d 日", year, month, day);
	
    return 0;
}