#include <stdio.h>
 
int main(void)
{
    int num1, num2, num3;
    printf("����������һλ���֣�");
    scanf("%d %d %d", &num1, &num2, &num3);
    int number = num1 * 100 + num2 * 10 + num3;
    printf("������������ɵ���λ����%d", number);
   
    return 0;
}