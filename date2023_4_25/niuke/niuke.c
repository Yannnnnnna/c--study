#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//void print(int litter[26]);
//int main(void) {
//    char input[100000] = {0};
//    int litter[26];//创建一个数组，来储存字母出现的次数
//    int i = 0, j = 0;
//    while(scanf("%c", &input[i]) != EOF){
//
//        if (input[i] >= 'a' && input[i] <= 'z') {
//            litter[input[i] - 'a']++;
//        }
//    }
//    print(litter);
//
//
//}
//void print(int litter[26]) {
//    for (int i = 0; i < 26; i++) {
//        if (litter[i] != 0) {
//            printf("%c:%d\n", ('a' + i), litter[i]);
//        }
//    }
//}

//#include<stdio.h>
//int prime(int n);
//int main(void) {
//    int T;
//    scanf_s("%d", &T);
//    long int arr[T];
//    for (int i = 0; i < T; i++) {
//        long int n;
//        scanf_s("%ld", &n);
//        int count = 0;
//        for (int j = 2; j < n; j++) {
//            if (prime(j)) {
//                count++;
//            }
//        }
//        arr[i] = count;
//    }
//    for (int i = 0; i < T; i++) {
//        printf("%ld\n", arr[i]);
//    }
//}
//int prime(int n) {
//    for (int i = 2; i < n; i++) {
//        if (n % i == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}


//先把所有素数储存起来，输入数字来调用

#include<stdio.h>
int arr[1000001];
int main(void) {
    //int i = 0, t = 0, j = 0;
    //scanf_s("%d", &t);//进行检测的次数
    //
    //int count = 0;
    //for (i = 2; i < 1000001; i++) {
    //    for (j = 2; j <= sqrt(i); j++) {
    //        if (i % j == 0) {
    //            break;
    //        }
    //    }
    //    //遍历完了所有的j
    //    if (i < j * j) {
    //        count++;
    //    }
    //    arr[i] = count;
    //}
    //int n;
    //while (t--) {
    //    scanf_s("%d", &n);
    //    printf("%d\n", arr[n]);
    //}
    int i, j, a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    
    for (i = 0; i < 10; i++);
    
        printf("%d", a[i]);
    
    printf("\n");
    for (i = 0, j = 9; i < 5; i++, j--);
    {
        printf("%d", a[i]);
        printf("%d", a[j]);
    }
    printf("\n");

}