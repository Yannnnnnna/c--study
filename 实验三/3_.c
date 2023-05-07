#include<stdio.h>
int main(void){
	
	int x;
	scanf("%d", &x);
	printf("请输入不多于五位的正整数:\n");//输入整数
	int y = x;  //保留x
	int post = 0;//定义一个变量储存位数
	for(int i = 1; i <= 5; i++){
		y  = y / 10;
		post++;
		if(y==0){
			break;
		}
		
	}
	printf("这是%d 位数\n",post);
	//逆序输出数字
	int result = 0;
	while(x != 0){
		result = result * 10 + x % 10;
		//取最后一位数
		x /= 10;
		//抛弃最后一位数，位数减一
	}
	printf("%d\n", result);
	return 0;
}