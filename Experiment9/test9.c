#include<stdio.h>
#define STUFENT 10
int searcho(char(*stuno)[11], char* no, int n) {
	//储存数组的长度
	int index = -1;

	for (int i = 0; i < STUFENT; i++) {
		//no储存的值要循环变化，所以创建一个临时变量来储存
		char* temp = no;
		for (int j = 0; j < n; j++) {
			//判断数组中的每一个元素是否相等
			if ((*stuno)[j] != *temp) {//11703990101
				//不相等就直接退出开始下一个数组的判断
				break;
			}
			else {
				//相等的话就继续判断下一个元素
				temp++;
			}
		}
		//如果temp储存的地址和no储存的地址+11相等，说明每一个元素都相等
		if (temp == no + 11) {//调试看一下具体情况
			index = i;
			break;
		}
		else {
			stuno++;
		}
	}
	return index;

}
int main() {
	char student[10][11] = { "11703990101","11703990102", "11703990103", "11703990104", "11703990105",
							"11703990106", "11703990107", "11703990108", "11703990109", "11703990110" };
	char target[11] = { "11703990103" };
	int index = searcho(student, target, 11);
	if (index != -1) {
		printf("%d", index);
	}
	else {
		printf("没有找到");
	}
	return 0;
}