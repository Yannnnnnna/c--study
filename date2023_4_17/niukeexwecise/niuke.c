#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    printf("%ld", fibonacci(n));
//}
//long fibonacci(int n) {
//
//    if (n == 1) {
//        return  0;
//    }
//    else if (n == 2) {
//        return  1;
//    }
//    else {
//        return fibonacci(n - 1) + fibonacci(n - 2);
//    }
//
//}

#include<stdio.h>
int count = 0;
void push(int arr[5][5], int a, int b);
int main(void) {
    int arr[5][5];
    int a, b;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1) {
                a = i;
                b = j;
            }
        }
    }
    push(arr, a, b);
    printf("%d", count);
    return 0;
}
void push(int arr[5][5], int a, int b) {
    arr[a][b] = 1;
    if (arr[2][2] == 1) {
        return;
    }else {
        if (a < 2) {

            push(arr, a + 1, b);
            count++;
        }else if (a > 2) {
           
            push(arr, a - 1, b);
            count++;
        }else if (b < 2) {
            
            push(arr, a, b + 1);
            count++;
        }else if (b > 2) {
            
            push(arr, a, b - 1);
            count++;
        }
    }
    
}