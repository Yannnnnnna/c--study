#include<stdio.h>
int main(void) {
    int a;
    scanf("%d", &a);
    int n[a];
    int result = 0;
    for (int i = 0; i < a; i++) {
        scanf("%d", &n[i]);
    }
    
    for (int i = 0; i < a; i++) {
        int count = 0;
        for (int j = 0; j < a; j++) {
            if (n[i] == n[j]) {
                count++;
            }
        }
        if (count >= a / 2) {
            result = n[i];
            if (result < count) {
                result = count;
            }

        }
    }
    printf("%d", result);
}
#include <stdio.h>
int main()
{
    char c[10000000];
    gets(c);
    //C 库函数 char *gets(char *str) 从标准输入 stdin 读取一行，
    // 并把它存储在 str 所指向的字符串中。
    //当读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。
    puts(c);

    //C 库函数 int puts(const char *str) 把一个字符串写入到标准输出 stdout，
    //直到空字符，但不包括空字符。换行符会被追加到输出中。
    return 0;
}