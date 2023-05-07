#include<stdio.h>
int search(int* data, int n, int len) {
	for (int i = 0; i < len; i++) {
		if (*data == n) {
			return i;

		}
	}
	return -1;
}
int main() {
	int data[1024];
	int len = 0;
	int i = 0;
	while (scanf("%d", &data[i]) != -1) {
		i++;
		len++;
	}
	int n;
	scanf("%d", &n);
	int index = search(data, n, len);
	if (len != -1) {
		printf("%d\n", index);
	}
	else {
		printf("Ã»ÓĞÕÒµ½\n");
	}
}