#include <stdio.h>
 
int main(void)
{	int v0 = 10;
	int a = 2;
	int t = 20;
	int s = (a * t * t) / 2;
	int v = a * t;
	int v_ = s / t;
	
	printf("20s以后的速度为%d，走过的路程为%d，平均速度为%d\n", v, s, v_);
    return 0;
}