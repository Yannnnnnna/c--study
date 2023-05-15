#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void) {
//	int a = 100;
//	int* p = &a;
//	printf("a 的地址为 %p\n", &a);
//	printf("a 的地址为 %p\n", p);
//	printf("p 的地址为 %p\n", &p);
//	printf("a 的值为 %d\n", a);
//	printf("p 指向的值为 %d\n", *p);
//
//	int* per = NULL;
//	printf("空指针的地址为%p\n", per);
//
//	return 0;
//}
//一年的第几天：
//一月31天，二月28天，三月31，四月30，五月31，六月30，七月31，八月31
//九月30，十月31，十一月30，十二月31
//1.判断平闰年
//2.倒叙判断
//#include<stdio.h>
//int main(void) {
//	int year, month, day;
//	scanf("%d %d %d", &year, &month, &day);
//	printf("%d %d %d", year, month, day);
//	int days = 0;
//	switch (month) {
//		case (12):
//			days += 30;
//		case (11):
//			days += 31;
//		case (10):
//			days += 30;
//		case(9):
//			days += 31;
//		case (8):
//			days += 31;
//		case (7):
//			days += 30;
//		case (6):
//			days += 31;
//		case (5):
//			days += 30;
//		case (4):
//			days += 31;
//		case (3):
//			days += 28;
//		case (2):
//			days += 31;
//		case (1):
//			days += day;
//	}
//	if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month >= 3) {
//		//判断是不是闰年，月份有没有大于三月
//		days++;
//	}
//	printf("%d", days);
//
//
//
//	return 0;
//}

#include<stdio.h>
//int main(void) {
//	int a, k;
//	scanf("%d", &a);
//	if (a > 0) {
//		printf("%d:", a);
//		for (k = 1; k <= a; k++) {
//			if (a % k == 0) {
//				printf("%d", k);
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		int a;
//		printf("请输入数字：\n");
//		scanf("%d", &a);
//		arr[i] = a;
//
//	}
//	int max = arr[0];
//	for (int j = 0; j < 10; j++) {
//		if (arr[j] < arr[j + 1]) {
//			max = arr[j + 1];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//#include<stdio.h>
//int main(void) {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 0; j <= 9; j++) {
//			for (int k = 0; k <= 9; k++) {
//				if (i * i * i + j * j * j + k * k * k == i * 100 + j * 10 + k) {
//					printf("%d\n", i * 100 + j * 10 + k);
//				}
//			}
//		}
//	}
//}

//#include<stdio.h>
//#include <math.h>
//int fac(int num1);
//int main(void) {
//
//	double sinx = 0.0;//结果
//	double x;
//	scanf("%lf", &x);//对x赋值
//	double a = 0, b = 0;
//	for (int n = 1; ; n++) {
//
//		a = pow(x, 2 * n - 1); //x 的次方
//		b = fac(2 * n - 1); //阶乘
//
//		if (n % 2 == 0) {//奇数正，偶数负
//			sinx -= 1.0 * a / b;
//		}
//		else {
//			sinx += 1.0 * a / b;
//		}
//		if (a / b < 1e-5) {
//			break;
//		}
//
//	}
//	printf("%lf", sinx);
//	return 0;
//}
//int fac(int num1) {//阶乘
//	int sum = 1;
//	for (int i = 1; i <= num1; i++) {
//		sum *= i;
//	}
//	return sum;
//}

#include<stdio.h>
int main(void) {
    int a, b;//创建变量限定范围
    scanf("%d %d", &a, &b);
    //判断各个位数相加是不是5
    int count = 0;
    for (int i = a; i <= b; i++) {
        int sum = 0;
        int temp = i;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum % 5 == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}