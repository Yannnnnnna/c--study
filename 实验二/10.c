#include <stdio.h>
 
int main(void)
{	char big;
	printf("������һ����д��ĸ��");
	scanf("%c", &big);
	char small = big + 32;
	printf ("������Ĵ�д��ĸ��Ӧ��Сд��ĸΪ%c", small);
	
    return 0;
}