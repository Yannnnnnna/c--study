#define _CRT_SECURE_NO_WARNINGS 1
//输入一个整数，打印比他大的十个整数

#include<stdio.h>
int main(void) {
	int num;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	for (int i = num; i <= num + 10; i++) {
		printf("%d\t", i);
	}
	

}
