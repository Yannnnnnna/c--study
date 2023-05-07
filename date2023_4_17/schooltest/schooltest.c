#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void) {
//	double grade;
//	scanf("%lf", &grade);
//	if (grade >= 90 && grade <= 100){
//		printf("A");
//	
//	}
//	else if (grade < 90 && grade >= 80) {
//		printf("B");
//	}
//	else if (grade < 80 && grade >= 70) {
//		printf("C");
//	}
//	else if (grade < 70 && grade >= 60) {
//		printf("D");
//	}
//	else if (grade < 60 && grade >= 0) {
//		printf("E");
//	}
//	return 0;
//
//}

//#include<stdio.h>
//int main(void) {
//    int arr[3];
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 2; i++) {
//        int temp = 0;
//        if (arr[i] > arr[i + 1]) {
//            temp = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = temp;
//        }
//    }
//    printf("%d,%d,%d", arr[0], arr[1], arr[2]);
//    return 0;
//
//}

//#include<stdio.h>
//void sum(int n);
//int main(void) {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        sum(n);
//    }
//}
//void sum(int n) {
//    long int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum += i;
//    }
//    printf("%ld", sum);
//}

//#include<stdio.h>
//int main(void) {
//    int T = 0;
//    scanf("%d", &T);
//    for (int i = 1; i <= T; i++) {
//        int n;
//        scanf("%d", &n);
//        int arr[20], count = 0;
//
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &arr[j]);
//            if (arr[j] == 0 || arr[j] == 1) {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//}

//#include<stdio.h>
//int main(void) {
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int count = 0;
//    for (int i = m; i <= n; i++) {
//        if (i % 3 == 0 && i % 5 != 0) {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\ncount=%d", count);
//    return 0;
//}

//#include<stdio.h>
//int main(void) {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        for (int i = 0; i <= n / 3; i++) {
//            for (int j = 0; j <= n / 2; j++) {
//                if (i * 3 + j * 2 + (n - i - j) * 0.5 == n) {
//                    printf("%d %d %d\n", i, j, (n - i - j));
//                }
//            }
//
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main(void) {
//    int T = 0;
//    scanf("%d", &T);
//    for (int i = 1; i <= T; i++) {
//        int  m, n;
//        scanf("%d %d", &m, &n);
//        int temp = m;
//        for (int i = 0; i < n - m + 1; i++) {
//            
//            for (int j = 1; j <= temp; j++) {
//                printf("%d", temp);
//            }
//            temp++;
//            printf("\n");
//        }
//        if (n == temp) {
//            break;
//        }
//
//    }
//    return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int sum(int a, int i);
//int main(void) {
//    int n, a;
//    while (scanf("%d %d", &n, &a) != EOF) {
//        long int result = 0;
//        for (int i = 1; i <= n; i++) {
//            result += sum(a, i);
//        }
//        printf("%ld", result);
//    }
//}
//int sum(int a, int i) {
//    int num = a;
//    for (int j = 1; j < i; j++) {
//        num += a * (int)pow(10, j);
//    }
//    return num;
//}

//#include<stdio.h>
//#include<math.h>
//int isprime(int n);
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    for (int i = 1; i <= n; i++) {
//        if (isprime(i) == 1) {
//            printf("%d ", i);
//            count++;
//
//            if (count % 10 == 0) {
//                printf("\n");
//            }
//        }
//    }
//
//}
//int isprime(int n) {
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}

#include <stdio.h>
int main() {
    int T;
    int m, n, a, b;
    scanf("%d", &T);
        for (int i = 1; i <= T; i++) {
            scanf("%d%d", &m, &n);
            a = m; b = n;
            for (int j = a; j <= b; j++) {
                for (int k = 1; k <= m; k++) {
                    printf("%d", m);
                }
                m++;
                printf("\n");
            }
        }
    return 0;
}
