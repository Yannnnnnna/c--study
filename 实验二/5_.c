#include <stdio.h>
 
int main(void)
{	int v0 = 10;
	int a = 2;
	int t = 20;
	int s = (a * t * t) / 2;
	int v = a * t;
	int v_ = s / t;
	
	printf("20s�Ժ���ٶ�Ϊ%d���߹���·��Ϊ%d��ƽ���ٶ�Ϊ%d\n", v, s, v_);
    return 0;
}