#include<stdio.h>
#include <math.h>
int fac(int num1);
int main(void) {

	double sinx = 0.0;//���
	double x;
	scanf("%lf", &x);//��x��ֵ
	double a = 0, b = 0;
	for (int n = 1; ; n++) {

		a = pow(x, 2 * n - 1); //x �Ĵη�
		b = fac(2 * n - 1); //�׳�

		if (n % 2 == 0) {//��������ż����
			sinx -= 1.0 * a / b;
		}
		else {
			sinx += 1.0 * a / b;
		}
		if (a / b < 1e-5) {
			break;
		}

	}
	printf("%lf", sinx);
	return 0;
}
int fac(int num1) {//�׳�
	int sum = 1;
	for (int i = 1; i <= num1; i++) {
		sum *= i;
	}
	return sum;
}