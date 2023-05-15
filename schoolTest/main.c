#include <stdio.h>
//int digit(int n);
//int main(void) {
//    //计算位数
//    int n;
//    scanf("%d", &n);
//    int digits = digit(n);
//    int t = digits * 2;
//    int arr[t];
//    for (int i = digits - 1, j = digits; i >= 0; i--, j++) {
//        arr[i] = n % 10;
//        arr[j] = arr[i];
//        n /= 10;
//    }
//
//    for (int i = 0; i < t; i++) {
//        printf("%d", arr[i]);
//        if(i != t-1){
//            printf(",");
//        }
//
//    }
//
//}
//int digit(int n) {
//    int digit = 0;
//    while (n != 0) {
//        n /= 10;
//        digit++;
//    }
//    return digit;
//}
//int main(void){
//    //表示待排列元素的个数
//    int n;
//    scanf("%d", &n);
//    //创建一个数组储存输入的整数
//    int arr[n];
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &arr[i]);
//    }
//    //进行排序
//    int temp = 0;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n - i - 1; ++j) {
//            if(arr[j] > arr[j + 1]){
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//
//        }
//    }
//    //输出最后的排序结果
//    for (int i = 0; i < n; ++i) {
//        printf("%d ",arr[i]);
//    }
//}
int sum(int* student, int n){   //计算总分
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += *student;
        student++;
    }
    return sum;
}
int main(void){
    int m, n;
    scanf("%d", &m);    //m个学生
    scanf("%d", &n);    //n门课程
    int student[m][n];
    for (int i = 0; i < m; ++i) {   //输入成绩
        for (int j = 0; j < n; ++j) {
            scanf("%d", &student[i][j]);
        }
    }
    //输出成绩
    for (int i = 0; i < m; ++i) {
        int total = sum(student[i], n);
        printf("%d, %.1f\n", total, 1.0 *total / n);
    }
}