#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//	
//		int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//		int(*p)[3] = a;
//		printf("%d,", *(*p + 1));
//		p++;
//		printf("%d,", *p[0]);
//		p = a + 2;
//		printf("%d,", *(*p));
//	
//
//}
//void count(int* arr, int n)
//{
//	int i = 0;
//	while (i < n)
//	{
//		printf("%d,", *(arr + i + n));
//		i++;
//	}
//}
//void main()
//{
//	int a[3][4] = { {1,3,5,7},{2,4,6,8}, {11,12,13,14} };
//	count(&a[1][1], 2);
//}
//void main()
//{
//	char* a[3] = { "the","big","book" };
//	char** p = a;
//	printf("%s,", *p);
//	p++;
//	printf("%s,", *p);
//	printf("%s,", *(p + 1));
//}
//void tran(int(*arr)[4], int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        printf("%d ", *(*(arr + i)));
//}
//void main()
//{
//    int a[][4] = { {1,2,3,4},
//             {5,6,7,8},
//             {9,10,11,12} };
//    tran(a, 2);
//}
//void maxmin(int* date, int* max, int* min, int len) {//查找并返回数组的最小值
//	for (int i = 0; i < len; i++) {
//		
//		if (*max < *date) {
//			*max = *date;
//
//		}
//		else if (*min > *date) {
//			*min = *date;
//		}
//		date++;
//	}
//
//
//}
//int main() {
//	int date[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = date[0];
//	int min = date[0];
//	maxmin(date, &max, &min, 10);
//	printf("%d, %d", max, min);
//
//}
//int count(char* string) {
//	int count = 0;
//	int str = strlen(string);
//	for (int i = 0; i < str; i++) {
//		if (!isdigit(*string)) {
//			count++;
//		}
//		string++;
//	}
//	return count;
//}
//int main() {
//	char str[] = "heel123abcd";
//	int sum = count(str);
//	printf("%d", sum);
//}
//int del(int* data, int n, int len) {
//	int* index = data;
//	for (int i = 0; i < len; i++) {
//		
//		if (*data == n) {
//			index++;
//			i++;
//			len--;
//		}
//		*data = *index;
//		data++;
//		index++;
//	}
//
//	return len;
//}
//int main() {
//	int arr[1024];
//	int i = 0;
//	int len = 0;
//	while (scanf("%d", &arr[i]) != -1)
//	{
//		i++;
//		len++;
//	}
//	len = del(arr, 4, len);
//	printf("%d", len);
//}
//int search(int* data, int n, int len) {
//	for (int i = 0; i < len; i++) {
//		if (*data == n) {
//			return i;
//
//		}
//	}
//	return -1;
//}
//int main() {
//	int data[1024];
//	int len = 0;
//	int i = 0;
//	while (scanf("%d", &data[i]) != -1) {
//		i++;
//		len++;
//	}
//	int n;
//	scanf("%d", &n);
//	int index = search(data, n, len);
//	if (len != -1) {
//		printf("%d\n", index);
//	}
//	else {
//		printf("没有找到\n");
//	}
//}
//void delch(char* string, int* len, char n) {
//	char* index = string;
//	for (int i = 0; i < *len; i++) {
//
//		if (*string == n) {
//			index++;
//			i++;
//			
//		}
//		*string = *index;
//		string++;
//		index++;
//	}
//	--* len;
//
//}
//int main() {
//	char string[] = "abcdrf";
//	char n;
//	int len = sizeof(string) / sizeof(string[0]) - 1;
//	scanf(" %c", &n);
//	printf("%s\n", string);
//	delch(string, &len, n);
//	for (int i = 0; i < len; i++) {
//		printf("%c", string[i]);
//	}
//	printf("\n");
//}
