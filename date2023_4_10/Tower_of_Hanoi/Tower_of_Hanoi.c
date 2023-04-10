#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//汉诺塔问题
void Tower(int number, char A, char B, char C);
int main(void) {
	printf("请输入层数：");
	int number;
	scanf("%d", &number);
	printf("\n解决步骤如下：\n");
	Tower(number, 'a', 'b', 'c');

}
//把n-1层移到b处，再把n层移到c处，然后把n-1层移到c处，重复上述过程，用递归
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