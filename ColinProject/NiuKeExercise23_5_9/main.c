//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int n, k, m;
//    scanf("%d", &n);    //n个人
//    scanf("%d", &k);    //重K开始报数
//    scanf("%d", &m);    //报到m的出列
//
//    int pop[n]; //创建一个数组来当人
//    for (int i = 0; i < n; ++i) {
//        pop[i] = i;
//    }
//    int t = n;
//    int index = k;  //报数人的下标
//    int cur = k;    //当前报数的人
//    while(n > 1){
//        //进行报数
//        int step = 0;   //创建一个变量来记录报数
//        while (step < m){
//            //当报数的是有效的人时，数字加1
//            if(pop[index] != -1){
//                step++;
//            }
//            cur = pop[index];   //记录当前报数的人，不影响计数，不会增加有效报数，相当于不计数
//            index = (index + 1) % t;    //【新知识】运用方法，让数组的下标不越界，循环起来！！！
//                                        //【重点】不能用n，因为n会减少，不符合我们想要让数组下标循环起来的目的，
//                                        //n--后，后面的下标根本无法访问，程序会死循环
//
//        }
//        //删人
//        pop[cur] = -1;  //需要用cur而不是index因为index已经加一了，会删错人
//        n--;
//    }
//    //遍历数组，找到最后一个人
//    for (int i = 0; i < t; ++i) {
//        if(pop[i] != -1){
//            printf("%d", pop[i]);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(void ){
//    int n,m;
//    scanf("%d", &n);    //输入要储存的数字个数
//    int arr[n];                 //创建数组来储存数字
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);        //输入要查找的数字
//
//    //查找并输出
//    for (int i = 0; i < n; ++i) {
//        if(arr[i] != m){    //只要求删除一个，可能有多个，只删除第一个，所以找到一次后要改变m的值
//            printf("%d ", arr[i]);
//        }else{
//            m = 0.1;
//        }
//
//    }
//}
#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    //找出出现最多的整数
    //【重点】【多次出现】    【思路】1.创建两个变量来粗存最大的次数和最大值
    //                              2. 遍历数组，记录数组每个元素，再次循环，查找每个数字在数组中出现的次数，并记录
    //                              3.如果记录的数字大于最大值就储存，否则进行下一次，直到遍历完所有数组

    int maxCount = 0;
    int maxNum = arr[0];
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            maxNum = arr[i];
        }
    }
    printf("%d", maxNum);
}