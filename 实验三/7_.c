#include<stdio.h>
int main(void){
	
	int x, y,option;
	scanf("%d %d", &x,&y);
	printf("������ѡ��\n");
	scanf("%d", &option);
	float result;
	switch(option){
		case 1:
			printf("���ӷ�\n");
			result = x + y;
			break;
		case 2:	
			printf("������\n");
			result = x - y;
			break;
		case 3:	
			printf("���˷�\n");
			result = x * y * 1.0;
			break;
		case 4:	
			printf("������\n");
			result = x / y * 1.0;
			break;
				
	}
	printf("%f",result);
	
	return 0;
}