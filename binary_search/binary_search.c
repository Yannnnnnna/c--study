#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二分法查找数组（函数）
//1.找中值，和目标值进行比较，定义开头和结尾变量
//2.大于开头变成中值，结尾减一，小于结尾变成中值，开头加一
//3.其他：定义一个数组；顺序排列；返回数组下标
int binary_search(int target, int length, int* arr);
int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target = 0;
	printf("请输入你要查找的数字：\n");
	scanf("%d", &target);
	binary_search(target, 10, arr);
	
}
int binary_search(int target, int length,int *arr) {
	int first, last, mid;
	first = arr[0];
	last = arr[10 - 1];
	
	while (first <= last) {
		mid = (first + last) / 2;
		if (target > arr[mid]) {
			first = mid + 1;
			
		}
		else if (target < arr[mid]) {
			last = mid - 1;
			

		}
		else {
			printf("找到了，下标为%d\n", mid);
			return 1;

		}
	}
	printf("NOT Found.\n");
		return 0;
}
