#include<stdio.h>
void wpos(char* string, int* begin, int* end) {
	int len = 0;
	while(1){
		int* start = string + *begin;
		char* temp = strchr(start, ' ');
		if (temp == NULL) {
			break;
		}
		*end = temp  - string;
		if (*end - *begin > len && *end >= 0) {
			len = *end - *begin;
		}
		else if (*end < 0) {
			break;
		}
		*begin = *end + 1;
		 
	}
	printf("%d", len);
	
}
int main() {
	char ch[1024] = "The code is likely to give a read access violation error because";
	int begin = 0;
	int end = 0;
	wpos(ch, &begin, &end);
	return 0;
}