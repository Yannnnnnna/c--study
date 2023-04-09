#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数判断是不是素数
#include<stdio.h>
#include<math.h>

void judgment(int number);
//void is_leap_year(int year);

int main(void) {
	for (int j = 101; j <= 200; j += 2) {
		judgment(j);

	} 
	////自己写的
	//int year;
	//scanf("%d", &year);
	//is_leap_year(year);
	//return 0;
	
	//老师讲的
	for (int i = 1000; i <= 2000; i++) {
		if (is_leap_year(i)) {
			printf("%d ", i);
		}
	}


}
void judgment(int number) {
	int temp = -1;
	for (int i = 2; i < sqrt(number); i++) {
		if (number % i == 0) {
			temp = 0;
			break;
		}

	}
	if (temp == -1) {
		printf("%d是素数\n", number);
	}
	
}
////自己写的
//void is_leap_year(int year) {
//	if ((year % 4 == 0 && year / 100 != 0) || year % 400 == 0) {
//		printf("%d 是闰年\n", year);
//	}
//}

int is_leap_year(int year) {
	if ((year % 4 == 0 && year / 100 != 0) || year % 400 == 0) {
		return 1;
	}
	return 0;
}