#include<stdio.h>
#define STUFENT 10
int searcho(char(*stuno)[11], char* no, int n) {
	//��������ĳ���
	int index = -1;

	for (int i = 0; i < STUFENT; i++) {
		//no�����ֵҪѭ���仯�����Դ���һ����ʱ����������
		char* temp = no;
		for (int j = 0; j < n; j++) {
			//�ж������е�ÿһ��Ԫ���Ƿ����
			if ((*stuno)[j] != *temp) {//11703990101
				//����Ⱦ�ֱ���˳���ʼ��һ��������ж�
				break;
			}
			else {
				//��ȵĻ��ͼ����ж���һ��Ԫ��
				temp++;
			}
		}
		//���temp����ĵ�ַ��no����ĵ�ַ+11��ȣ�˵��ÿһ��Ԫ�ض����
		if (temp == no + 11) {//���Կ�һ�¾������
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
		printf("û���ҵ�");
	}
	return 0;
}