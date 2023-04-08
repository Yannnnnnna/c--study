#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//提供strlen的函数的原型
int main(void) {

////输出十六进制和八进制
//	int x = 100;
//	printf("十进制为%d，十六进制为%x，八进制为%o\n", x, x, x);
//	printf("显示前缀的十进制数%#d，十六进制%#x，八进制%#o\n", x, x, x);
//	
////显示字符的代码编号
//	char ch;
//	scanf("%c", &ch);
//	printf("%d   ,  %c\n", ch, ch);
//	
//使用字符串	
	char name[40];//创建了一个包含了40个储存单元的数组，每个单元储存一个char类型的值
	printf("请输入你的名字：");
	scanf("%s", name);
	printf("你好！%s,很高兴见到你\n", name);
	printf("你的名字有%zd , %zd个字符\n", strlen(name), sizeof(name));
	
	return 0;
}


