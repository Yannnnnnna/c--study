#include <stdio.h>
 
int main(void)
{	float a, b;
	printf("������������������\n");

	scanf("%f %f", &a, &b);
	printf("�����������������Ϊ%f��%f\n", a, b);
	
	float temp = 0;
	
	temp = a;
	a = b;
	b =temp;
	printf("���������������������Ϊ%f, %f\n", a, b);
	
    return 0;
}