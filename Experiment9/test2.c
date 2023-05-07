#include<stdio.h>
#include <ctype.h>
#include<string.h>
int count(char* string) {
	int count = 0;
	int str = strlen(string);
	for (int i = 0; i < str; i++) {
		if (!isdigit(*string)) {
			count++;
		}
		string++;
	}
	return count;
}
int main() {
	char str[] = "heel123abcd";
	int sum = count(str);
	printf("%d", sum);
}
