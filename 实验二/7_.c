#include <stdio.h>
#include<math.h>
 
int main(void)
{	int a, b, c;
	printf("�����������ε������ߣ�\n");
	scanf("%d %d %d",&a, &b, &c);
	int s = (a + b + c) / 2;
	int sum = s * (s - a) * (s - b) * (s - c);
	float S = sqrt(sum);
	printf("�����ε����Ϊ%f", S);
    
	return 0;
}