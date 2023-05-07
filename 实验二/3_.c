#include <stdio.h>
 
int main(void)
{	char ch1, ch2,ch3;
	printf("请输入三个数字字符：\n");
	scanf("%c %c %c", &ch1, &ch2, &ch3);
	printf("你输入的数字字符组成的整数为%c%c%c", ch1, ch2, ch3);
	
    return 0;
}