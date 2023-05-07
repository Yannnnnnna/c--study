#include<stdio.h>
int main(void) {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		int a;
		printf("ÇëÊäÈëÊý×Ö£º\n");
		scanf("%d", &a);
		arr[i] = a;

	}
	int max = arr[0];
	for (int j = 0; j < 10; j++) {
		if (arr[j] < arr[j + 1]) {
			max = arr[j + 1];
		}
	}
	printf("%d", max);
	return 0;
}