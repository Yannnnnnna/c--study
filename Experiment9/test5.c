#include<stdio.h>
void delch(char* string, int* len, char n) {
	char* index = string;
	for (int i = 0; i < *len; i++) {

		if (*string == n) {
			index++;
			i++;
			
		}
		*string = *index;
		string++;
		index++;
	}
	--* len;

}
int main() {
	char string[] = "abcdrf";
	char n;
	int len = sizeof(string) / sizeof(string[0]) - 1;
	scanf(" %c", &n);
	printf("%s\n", string);
	delch(string, &len, n);
	for (int i = 0; i < len; i++) {
		printf("%c", string[i]);
	}
	printf("\n");
}
