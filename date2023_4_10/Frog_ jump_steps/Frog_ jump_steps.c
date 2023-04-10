#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int solute = 0;//记录解决次数
void jump(int amount);
int main(void) {
	printf("请输入青蛙要跳几节台阶：");
	int amount;
	scanf("%d", &amount);
	jump(amount);
	printf("一共有%d种解决办法\n", solute);
}
void jump(int steps) {
	
	if (steps == 0) {
		solute++;
	}
	else if (steps > 0) {
		jump(steps - 1);
		jump(steps - 2);
	}
	//方法二：用斐波那契数列
	
}