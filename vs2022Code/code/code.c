#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main(void)
{
    int temp = 0;
    char arr[6] = { 'Z', 'z','z', 'w', 'Y' };
    for (int i = 0; i < 5; i++) {
        if(arr[i] < 'W' || (arr[i] >= 'a' && arr[i] < 'w') )
        {
            arr[i] = arr[i] + 4;
        }else if (arr[i] >= 'W' && arr[i] <= 'Z'){
            arr[i] -= 22;
        }
        else if (arr[i] >= 'w' && arr[i] <= 'z'){
            arr[i] -= 22;
        }
       
    }
     for (int j = 0; j < 5; j++) {
            printf("  %c", arr[j]);    
        
    }

    return 0;
}
*/

int main(void) {
	
	int i, j;
	char ch1, ch2, ch3, ch4, ch5;
	scanf("%c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);
    char chars[5] = { ch1, ch2, ch3, ch4, ch5 };
	
	for (i = 0; i < 5; i++) {
		if (chars[i] < 'W' || (chars[i] > 'a' && chars[i] < 'w')) {
			chars[i] += 4;
		}
		else if (chars[i] >= 'W' && chars[i] <= 'Z') {
			chars[i] -= 22;
		}
		else if (chars[i] >= 'w' && chars[i] <= 'z') {
			chars[i] -= 22;
		}
		printf("%c", chars[i]);
	}


	return 0;
}