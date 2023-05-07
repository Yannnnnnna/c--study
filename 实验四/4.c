#include<stdio.h>
#include <math.h>
int fac(int num1);
int main(void) {

	double sinx = 0.0;//结果
	double x;
	scanf("%lf", &x);//对x赋值
	double a = 0, b = 0;
	for (int n = 1; ; n++) {

		a = pow(x, 2 * n - 1); //x 的次方
		b = fac(2 * n - 1); //阶乘

		if (n % 2 == 0) {//奇数正，偶数负
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
int fac(int num1) {//阶乘
	int sum = 1;
	for (int i = 1; i <= num1; i++) {
		sum *= i;
	}
	return sum;
}