#define _CRT_SECURE_NO_WARNINGS 1
//����һ����������ӡ�������ʮ������

#include<stdio.h>
int main(void) {
	int num;
	printf("������һ��������\n");
	scanf("%d", &num);
	for (int i = num; i <= num + 10; i++) {
		printf("%d\t", i);
	}
	

}
