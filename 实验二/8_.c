#include <stdio.h>
#define PI 3.14        
int main(void)
{	float r = 1.5;
	float h = 3;
	float C = PI * r * r;
	float S = 2 * PI * r * h + 2 * C;
	float V = C * h;
	
	printf("Բ�������ܳ�Ϊ%f,�����Ϊ%f�����Ϊ%f", C, S, V);
 
    return 0;
}