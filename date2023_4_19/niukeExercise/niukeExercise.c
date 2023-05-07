#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int tower[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tower[i]);

    }
    int day;
    scanf("%d", &day);
    for (int i = 0; i < day; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        for (int j = a - 1; j < b; j++) {
            tower[j] += c;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tower[i]);
    }

}

#include<stdio.h>
int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        double sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] < 1.0 * sum / n) {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int index = -1;
        int find = 0;
        scanf("%d", &find);
        for (int i = 0; i < n; i++) {
            if (arr[i] == find) {
                index = i;
                printf("%d\n", index);
                break;
            }
        }
        if (index == -1) {
            printf("No\n");
        }
    }
}


#include<stdio.h>
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < a[i] + b[j]) {
                max = a[i] + b[j];
            }
        }
    }
    printf("%d", max);
}

#include<stdio.h>
int main(void) {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int n = 0;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        for (int k = n - 1; k >= 0; k--) {
            printf("%d ", arr[k]);

        }
        printf("\n");
    }
}