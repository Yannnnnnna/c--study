#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int isPrime(int number);
//int main() {
//    //输入要判断几个数
//    int count = 0;
//    scanf("%d", &count);
//    //每行一个整数，判断是不是素数
//    for (int i = 1; i <= count; i++) {
//        int num = 0;
//        scanf("%d", &num);
//        if (isPrime(num)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//    return 0;
//}
////创建一个函数，判断是不是函数
//int isPrime(int number) {
//    int result = 1;
//    for (int i = 2; i <= sqrt(number); i++) {
//        if (number % i == 0) {
//            result = 0;
//            break;
//        }
//    }
//    if (number == 1) {
//        result = 0;
//    }
//    return result;
//}

#include<stdio.h>
#include<ctype.h>

////定义一个字符数组，输入字符串
////循环判断每个字符的类型，数字用int isdigit(int c)
////字母用int isalpha(int c);
//int main() {
//    char a, n;
//    int letter = 0, digit = 0, others = 0;
//    while ((n = getchar()) != '?') {
//        if (isalpha(n)) {
//            letter++;
//        }
//        else if (isdigit(n)) {
//            digit++;
//        }
//        else {
//            others++;
//        }
//    }
//    printf("Letters=%d\nDigits=%d\nOthers=%d", letter, digit, others);
//
//    return 0;
//
//}

//#include<stdio.h>
//int factorial(int number);
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int s = 0;
//    for (int i = 1; i <= n; i++) {
//        s += factorial(i);
//    }
//    printf("%d", s);
//
//}
//int factorial(int number) {
//    int result = 1;
//    for (int i = 1; i <= number; i++) {
//        result *= i;
//    }
//    return result;
//}

#include<stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    int line = ch - 'A' + 1;//总行数
    for (int i = 1; i <= line; i++) {//每行数
        //输出空格
        for (int j = 1; j <= line - i; j++) {
            printf(" ");
        }
        //输出前面一半
        for (char k = 'A'; k <= 'A' + i - 1; k++) {
            printf("%c", k);
        }
        //输出后面一半
        for (char r = 'A' + i - 2; r >= 'A'; r--) {
            printf("%c", r);
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
#include<math.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

