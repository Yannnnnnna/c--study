#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int solute = 0;//��¼�������
void jump(int amount);
int main(void) {
	printf("����������Ҫ������̨�ף�");
	int amount;
	scanf("%d", &amount);
	jump(amount);
	printf("һ����%d�ֽ���취\n", solute);
}
void jump(int steps) {
	
	if (steps == 0) {
		solute++;
	}
	else if (steps > 0) {
		jump(steps - 1);
		jump(steps - 2);
	}
	//����������쳲���������
	
}