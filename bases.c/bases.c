#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>//�ṩstrlen�ĺ�����ԭ��
int main(void) {

////���ʮ�����ƺͰ˽���
//	int x = 100;
//	printf("ʮ����Ϊ%d��ʮ������Ϊ%x���˽���Ϊ%o\n", x, x, x);
//	printf("��ʾǰ׺��ʮ������%#d��ʮ������%#x���˽���%#o\n", x, x, x);
//	
////��ʾ�ַ��Ĵ�����
//	char ch;
//	scanf("%c", &ch);
//	printf("%d   ,  %c\n", ch, ch);
//	
//ʹ���ַ���	
	char name[40];//������һ��������40�����浥Ԫ�����飬ÿ����Ԫ����һ��char���͵�ֵ
	printf("������������֣�");
	scanf("%s", name);
	printf("��ã�%s,�ܸ��˼�����\n", name);
	printf("���������%zd , %zd���ַ�\n", strlen(name), sizeof(name));
	
	return 0;
}


