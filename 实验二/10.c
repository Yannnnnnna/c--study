#include <stdio.h>
 
int main(void)
{	char big;
	printf("请输入一个大写字母：");
	scanf("%c", &big);
	char small = big + 32;
	printf ("你输入的大写字母对应的小写字母为%c", small);
	
    return 0;
}