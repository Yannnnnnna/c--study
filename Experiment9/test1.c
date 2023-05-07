#include<stdio.h>
void maxmin(int* date, int* max, int* min, int len){//查找并返回数组的最小值
	for(int i = 0; i < len; i++){
		//判断是否大于最大值或小于最小值
		if(*max < *date){
			*max = *date;
		
		}else if(*min > *date){
			*min = *date;
		}
		//数组指向后移一个单位
		date++;
	}
	
	
}
int main(){
	int date[10] = {1,2,3,4,5,6,7,8,9,10};
	int max = date[0];
	int min = date[0];
	maxmin(date, &max, &min, 10);
	printf("%d, %d", max, min);
	
}