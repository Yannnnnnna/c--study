#include<stdio.h>
int main(void){
	
	int a, b ,c;
	printf("�밴��С�������������ε�����\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a + b > c){
		printf("yes");
		if (a * a + b * b == c * c){
			printf("��ֱ��������\n");
			if(a == b){
				printf("�ǵ���������\n");
			}
		}
	}else {
		printf("�������������\n");
	}
	
	return 0;
}