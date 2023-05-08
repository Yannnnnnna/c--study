#include<stdio.h>
void stringvert(char* str) {
	int len = strlen(str);
	char temp = 0;
	for (int i = 0, j = len - 1; i < j; i++, j--) {
		temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;

	}

}
int main(void) {
	char str[1024] = "abcdef";
	stringvert(str);
	for (int i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
	}
}