#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŵ������
void Tower(int number, char A, char B, char C);
int main(void) {
	printf("�����������");
	int number;
	scanf("%d", &number);
	printf("\n����������£�\n");
	Tower(number, 'a', 'b', 'c');

}
//��n-1���Ƶ�b�����ٰ�n���Ƶ�c����Ȼ���n-1���Ƶ�c�����ظ��������̣��õݹ�
void Tower(int number, char A, char B, char C) {
	if (number == 1) {
		printf("%c -> %c\n", A, C);
	}
	else {
		Tower(number - 1, A,C, B);
		printf("%c -> %c\n", A, C);
		Tower(number - 1, B, A, C);
	}
}