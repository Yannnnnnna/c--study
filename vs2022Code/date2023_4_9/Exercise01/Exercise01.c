#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {
	const int min = 60;
	
	int minute = 1;
	while (minute > 0) {
		int  hour = 0, minute1 = 0;
		printf("�������������\n");
		scanf("%d", &minute);
		hour = minute / min;
		minute1 = minute % 60;
		printf("%d������%dСʱ%d����\n", minute, hour, minute1);
		if (minute <= 0)
			break;
	}
	
	
}
