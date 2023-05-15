#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int search(int* list, int n, int x) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (*list == x) {
            index = i;
        }
    }
    return index;
}
int main(void) {
    int repeat;
    scanf("%d", &repeat);
    while (repeat--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        int index = search(arr, n, x);
        if (index != -1) {
            printf("index=%d\n", index);
        }
        else {
            printf("Not found");
        }
        
    }
}

