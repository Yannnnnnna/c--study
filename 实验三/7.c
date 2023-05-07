#include<stdio.h>

int main(void){
	
	char letter;
	scanf("%c", &letter);
	if(letter >= 'A' && letter <= 'Z'){
		letter += 32;
		printf("%c", letter);
	}else if(letter >= 'a' && letter <= 'z'){
		letter -= 32;
		printf("%c", letter);
	}else{
		printf("The character need not to be changed.");
	}
	
	return 0;
}