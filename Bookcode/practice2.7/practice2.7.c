int sm(void)
#include<stdio.h>
int main(void)  //为什么不行
{
	sm(); sm(); sm();
	printf("\n");
	sm(); sm();
	printf("\n");
	sm();

	return 0;
}
 int sm(void)
{
	printf("smile!");
}