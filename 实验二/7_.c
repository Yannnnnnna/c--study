#include <stdio.h>
#include<math.h>
 
int main(void)
{	int a, b, c;
	printf("请输入三角形的三条边：\n");
	scanf("%d %d %d",&a, &b, &c);
	int s = (a + b + c) / 2;
	int sum = s * (s - a) * (s - b) * (s - c);
	float S = sqrt(sum);
	printf("三角形的面积为%f", S);
    
	return 0;
}