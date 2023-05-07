#include <stdio.h>
 
int main(void)
{
    int num1, num2, num3;
    printf("请输入三个一位数字：");
    scanf("%d %d %d", &num1, &num2, &num3);
    int number = num1 * 100 + num2 * 10 + num3;
    printf("你输入数字组成的三位数是%d", number);
   
    return 0;
}