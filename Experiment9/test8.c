#include<stdio.h>
void svowel(char* s1, char* s2) {
	int len = strlen(s1);
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (*s1 == 'a' || *s1 == 'e' || *s1 == 'i' || *s1 == 'o' || *s1 == 'u'
			|| *s1 == 'A' || *s1 == 'E' || *s1 == 'I' || *s1 == 'O' || *s1 == 'U' ) {
			*s2 = *s1;
			s2++;
			count++;
		}
		s1++;
	}
}
int main(void) {
	char s1[1024] = "abcdefghhhhhh";
	char s2[1024] = "0";
	svowel(s1, s2);
	for (int i = 0; i < strlen(s1); i++) {
		printf("%c", s1[i]);
	}
	printf("\n");
	for (int i = 0; i < strlen(s2); i++) {
		printf("%c", s2[i]);
	}
}