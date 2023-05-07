#include <stdio.h>
#include<math.h>
//1.首先使用pow函数必须要加头文件 :#include<math.h>
//在某些特定的情况之下，pow函数的double类型可能会引起输出结果的错误.
//底数 a为负数并且指数 b 不是整数，将会导致 domain error 错误.
//底数 a和指数 b都是 0，会导致 domain error 错误.
//底数 a是 0，指数 b 为负数，会导致 domain error 或 pole error 错误.
//所以在使用pow函数时，要注意底数和指数数字的正负，不要违反基本的数学常识


int main(void)
{	//pow(4, 2)
	float x;
	printf("请输入一个浮点数（1.0<=X<=100.0）:\n");
	scanf("%f", &x);
	float result = pow(x, 5);
	printf("x^5=%f", result);
    return 0;
}