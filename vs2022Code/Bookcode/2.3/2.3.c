/* two_func.c---һ���ļ�������������*/
#include<stdio.h>
void butler(void); //ANSI/ISO C ����ԭ��,���߱�������Ҫ�õ����������ɾ����Ӱ���������
void butler(void)
{
	printf("You rang, sir?\n");

}
int main(void)
{
	
	printf("I will summon the butler function .\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n"); 

	return 0;

}
