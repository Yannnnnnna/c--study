//一年的第几天：
//一月31天，二月28天，三月31，四月30，五月31，六月30，七月31，八月31
//九月30，十月31，十一月30，十二月31
//1.判断平闰年
//2.倒叙判断
#include<stdio.h>
int main(void){
	int year, month, day;
	printf("请输入年月日\n");	
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
		//判断是不是闰年，月份有没有大于三月
         days++;
	} 
	printf("%d", days);
	

	
	return 0;
}