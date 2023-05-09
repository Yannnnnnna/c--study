//#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digit(int n);
int main(void) {
	//¼ÆËãÎ»Êý
	int n;
	scnanf("%d", &n);
	int t = n;
	int digits = digit(n);
	int arr[n * 2];
	for (int i = n - 1, j = n; i >= 0; i--, j++) {
		arr[i] = n % 10;
		arr[j] = arr[i];
		n /= 10;
	}

	for (int i = 0; i < t; i++) {
		
	}
	
}
int digit(int n) {
	int digit = 0;
	while (n != 0) {
		n /= 10;
		digit++;
	}
	return digit;
}
