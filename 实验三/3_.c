#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	printf("�����벻������λ��������:\n");//��������
	int y = x;  //����x
	int post = 0;//����һ����������λ��
	for(int i = 1; i <= 5; i++){
		y  = y / 10;
		post++;
		if(y==0){
			break;
		}
		
	}
	printf("����%d λ��\n",post);
	//�����������
	int result = 0;
	while(x != 0){
		result = result * 10 + x % 10;
		//ȡ���һλ��
		x /= 10;
		//�������һλ����λ����һ
	}
	printf("%d\n", result);
	return 0;
}