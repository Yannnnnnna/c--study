#include<stdio.h>
void maxmin(int* date, int* max, int* min, int len){//���Ҳ������������Сֵ
	for(int i = 0; i < len; i++){
		//�ж��Ƿ�������ֵ��С����Сֵ
		if(*max < *date){
			*max = *date;
		
		}else if(*min > *date){
			*min = *date;
		}
		//����ָ�����һ����λ
		date++;
	}
	
	
}
int main(){
	int date[10] = {1,2,3,4,5,6,7,8,9,10};
	int max = date[0];
	int min = date[0];
	maxmin(date, &max, &min, 10);
	printf("%d, %d", max, min);
	
}