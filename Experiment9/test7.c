#include<stdio.h>
void strsta(char* string, int* num) {
	int len = strlen(string);
	for (int i = 0; i < len; i++) {
		
		if (*string >= '0' && *string <= '9') {
			(*(num + 1))++;
		}
		else if (isalpha(*string)) {
			(*num)++;
		}
		else if (*string == ' ') {
			(*(num + 2))++;
		}
		else {
			(*(num + 3))++;
		}
		string++;
	}
}
int main(void) {
	char string[1024] = "abcd12345 #$%";
	int num[4] = {0,0,0,0};
	strsta(string, num);
	printf("%d %d %d %d", num[0], num[1], num[2], num[3]);
}