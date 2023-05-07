#include <stdio.h>
 
int main(void)
{	int number1, number2, number3;
	printf("Please input three number:\n");
	scanf("%d %d %d", &number1, &number2, &number3);
	
	int sum = number1 + number2 + number3;
	float average = sum / 3.0;
    
    printf("sum = %d, average = %f \n", sum, average);

 
    return 0;
}