#include<stdio.h>
int del(int* data, int n, int len) {
	int* index = data;
	for (int i = 0; i < len; i++) {
		
		if (*data == n) {
			index++;
			i++;
			len--;
		}
		*data = *index;
		data++;
		index++;
	}

	return len;
}
int main() {
	int arr[1024];
	int i = 0;
	int len = 0;
	while (scanf("%d", &arr[i]) != -1)
	{
		i++;
		len++;
	}
	len = del(arr, 4, len);
	printf("%d", len);
}