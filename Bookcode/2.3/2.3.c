/* two_func.c---一个文件包含两个函数*/
#include<stdio.h>
void butler(void); //ANSI/ISO C 函数原型,告诉编译器我要用到这个函数，删除不影响程序运行
void butler(void)
{
	printf("You rang, sir?\n");

}
int main(void)
{
	
	printf("I will summon the butler function .\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n"); 

	return 0;

}
