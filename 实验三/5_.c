//һ��ĵڼ��죺
//һ��31�죬����28�죬����31������30������31������30������31������31
//����30��ʮ��31��ʮһ��30��ʮ����31
//1.�ж�ƽ����
//2.�����ж�
#include<stdio.h>
int main(void){
	int year, month, day;
	printf("������������\n");	
	scanf("%d %d %d",&year,&month, &day);
	int days = 0;
	switch(month){
		case 12:
			days += 30;
		case 11:
			days += 31;
		case 10:
			days += 30;
		case 9:
			days += 31;
		case 8:
			days += 31;
		case 7:
			days += 30;
		case 6:
			days += 31;
		case 5:
			days += 30;
		case 4:
			days += 31;
		case 3:
			days += 28;
		case 2:
			days += 31;
		case 1:
			days += day;
	}
	if((year%4==0 && year%100!=0 || year%400==0) && month>=3){
		//�ж��ǲ������꣬�·���û�д�������
         days++;
	} 
	printf("%d", days);
	

	
	return 0;
}