#include<stdio.h>
int main(void) {
    int a;
    scanf("%d", &a);
    int n[a];
    int result = 0;
    for (int i = 0; i < a; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < a; i++) {
        int count = 0;
        for (int j = 0; j < a; j++) {
            if (n[i] == n[j]) {
                count++;
            }
        }
        if (count >= a / 2) {
            result = n[i];
            if (result < count) {
                result = count;
            }

        }
    }
    printf("%d", result);
}
#include <stdio.h>
int main()
{
    char c[10000000];
    gets(c);
    //C �⺯�� char *gets(char *str) �ӱ�׼���� stdin ��ȡһ�У�
    // �������洢�� str ��ָ����ַ����С�
    //����ȡ�����з�ʱ�����ߵ����ļ�ĩβʱ������ֹͣ�����������������
    puts(c);

    //C �⺯�� int puts(const char *str) ��һ���ַ���д�뵽��׼��� stdout��
    //ֱ�����ַ��������������ַ������з��ᱻ׷�ӵ�����С�
    return 0;
}