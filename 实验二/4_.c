#include <stdio.h>
#include<math.h>
//1.����ʹ��pow��������Ҫ��ͷ�ļ� :#include<math.h>
//��ĳЩ�ض������֮�£�pow������double���Ϳ��ܻ������������Ĵ���.
//���� aΪ��������ָ�� b �������������ᵼ�� domain error ����.
//���� a��ָ�� b���� 0���ᵼ�� domain error ����.
//���� a�� 0��ָ�� b Ϊ�������ᵼ�� domain error �� pole error ����.
//������ʹ��pow����ʱ��Ҫע�������ָ�����ֵ���������ҪΥ����������ѧ��ʶ


int main(void)
{	//pow(4, 2)
	float x;
	printf("������һ����������1.0<=X<=100.0��:\n");
	scanf("%f", &x);
	float result = pow(x, 5);
	printf("x^5=%f", result);
    return 0;
}