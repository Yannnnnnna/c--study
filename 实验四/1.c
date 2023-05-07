#include<stdio.h>
int main(void){
	int a, k;
	scanf("%d", &a);
	if(a > 0){
		printf("%d:",a);
		for(k = 1; k <= a; k++){
			if(a % k == 0){
				printf("%d",k);
			}
		}
	}
	printf("\n");
	return 0;
}