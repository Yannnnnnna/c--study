#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void) {
//	int a = 100;
//	int* p = &a;
//	printf("a �ĵ�ַΪ %p\n", &a);
//	printf("a �ĵ�ַΪ %p\n", p);
//	printf("p �ĵ�ַΪ %p\n", &p);
//	printf("a ��ֵΪ %d\n", a);
//	printf("p ָ���ֵΪ %d\n", *p);
//
//	int* per = NULL;
//	printf("��ָ��ĵ�ַΪ%p\n", per);
//
//	return 0;
//}
//һ��ĵڼ��죺
//һ��31�죬����28�죬����31������30������31������30������31������31
//����30��ʮ��31��ʮһ��30��ʮ����31
//1.�ж�ƽ����
//2.�����ж�
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
//		//�ж��ǲ������꣬�·���û�д�������
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
//		printf("���������֣�\n");
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
//	double sinx = 0.0;//���
//	double x;
//	scanf("%lf", &x);//��x��ֵ
//	double a = 0, b = 0;
//	for (int n = 1; ; n++) {
//
//		a = pow(x, 2 * n - 1); //x �Ĵη�
//		b = fac(2 * n - 1); //�׳�
//
//		if (n % 2 == 0) {//��������ż����
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
//int fac(int num1) {//�׳�
//	int sum = 1;
//	for (int i = 1; i <= num1; i++) {
//		sum *= i;
//	}
//	return sum;
//}

#include<stdio.h>
int main(void) {
    int a, b;//���������޶���Χ
    scanf("%d %d", &a, &b);
    //�жϸ���λ������ǲ���5
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