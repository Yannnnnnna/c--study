#include <stdio.h>
 
int main(void)
{
    
    printf("请输入一个ASCII码值:");
    int number;
	scanf("%d", &number);
	printf("你输入的ASCII码为%C", number);
 
    return 0;
}