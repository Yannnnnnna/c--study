#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ַ��������飨������
//1.����ֵ����Ŀ��ֵ���бȽϣ����忪ͷ�ͽ�β����
//2.���ڿ�ͷ�����ֵ����β��һ��С�ڽ�β�����ֵ����ͷ��һ
//3.����������һ�����飻˳�����У����������±�
int binary_search(int target, int length, int* arr);
int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target = 0;
	printf("��������Ҫ���ҵ����֣�\n");
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
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			return 1;

		}
	}
	printf("NOT Found.\n");
		return 0;
}
