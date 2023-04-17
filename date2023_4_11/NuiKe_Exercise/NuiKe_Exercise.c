#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////第一行输入一个数据组数n
////接下来n行每行输入两个整数
//
//int main(void) {
//    int n, a, b;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &a, &b);
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//
////多组数据，每组输入两个整数，当两个整数都为0时表示输入结束
////对于每组数据输出两个整数的和
//#include<stdio.h>
//int main(void) {
//
//    for (;;) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        if (a == 0 && b == 0)
//            break;
//        printf("%d\n", a + b);
//
//    }
//    return 0;
//}
//
////求出[a,b]区间内有多少个数数位之和为5的倍数
////输入一行包含两个整数a,b (1<= a<= b<=1000000)
////输出一个整数
//#include<stdio.h>
//int main(void) {
//    int a, b;//创建变量限定范围
//    scanf("%d %d", &a, &b);
//    //判断各个位数相加是不是5
//    int count = 0;
//    for (int i = a; i <= b; i++) {
//        int sum = 0;
//        int temp = i;
//        while (temp != 0) {
//            sum += temp % 10;
//            temp /= 10;
//        }
//        if (sum % 5 == 0) {
//            count++;
//        }
//    }
//
//    printf("%d", count);
//
//    return 0;
//}
//
////输入一个整数n(1 <= n <= 100000)
////从1开始按从小到大的顺序输出所有回文数
//#include<stdio.h>
//int main(void) {
//    //核心：倒叙输出整数，判断是否和原来的数字相等
//    //确定输出整数的范围
//    int n;
//    scanf("%d", &n);
//    //for 循环输出数字
//    for (int i = 1; i <= n; i++) {
//        //定义一个变量储存i的值
//        int temp = i;
//        //while 循环输出回文数
//        int result = 0;
//        while (temp != 0) {
//            result = result * 10 + temp % 10;
//            temp /= 10;
//        }
//        //判断倒叙输出的数字和原数字是否相同
//        if (result == i) {
//            printf("%d\n", i);
//        }
//    }
//
//
//    return 0;
//
//}

//输出1~n中能被3整除，且至少有一位数字是5的所有整数.
#include<stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        if (i % 3 == 0) {
            int temp = i;
            while (temp != 0) {
                int a = temp % 10;
                if (a == 5) {
                    printf("%d\n", i);
                    break;
                    
                }
                temp /= 10;
            }
        }
    }
    return 0;
}

//编程找出小于n的四位数ABCD中满足下述关系的数：
//（ＡＢ＋ＣＤ）∗（ＡＢ＋ＣＤ）＝ＡＢＣＤ
#include<stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1000; i <= n; i++) {
        //分离四位数
        int A = i / 1000;
        int B = i % 1000 / 100;
        int C = i % 100 / 10;
        int D = i % 10;
        //计算公式左边
        int result = (A * 10 + B + C * 10 + D) * (A * 10 + B + C * 10 + D);
        //判断是否相等
        if (result == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}

//求自然数N的所有约数之和。
#include<stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}

//n元人民币换成1元、2元、5元的零钱，请计算共有多少种兑换方法？（再次练习！！！）
//循环，从0张五元开始一直到最多张五元（n/5），两元和一元同样，最后数字等于n
#include<stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int a = 0; a <= n / 5; a++) {
        for (int b = 0; b <= n / 2; b++) {
            for (int c = 0; c <= n; c++) {
                if (a * 5 + b * 2 + c == n) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}

/*

牛村正在进行村长选举，投票人一人一票，
    牛可乐是候选人A（投票代号为1）
    牛能是候选人B（投票代号为2）
    和牛妹是候选人C（投票代号为3）
    其他投票代号无效。
投票列表用以-1表示结束，请分别统计出他们的得票数。
谁的得票超过全部投票人数的半数，就输出谁当选为村长，
如“A-yes”表示A当选，全部不过半数，输出“all-NO”。

输入一行，若干个整数，以-1结尾
输出五行，前三行表示三个候选人的表票数，然后是总的有效票数，最后一行表示选举结果。
*/
#include<stdio.h>
int main(void) {
    int vote;
    int A = 0, B = 0, C = 0;
    int tot = 0;//投票总数
    int fale = 0;//废票
    //计算每个人票数，废票数，总票数
    for (;;) {
        scanf("%d", &vote);
        if (vote == -1) {
            break;
        }
        else if (vote == 1) {
            A++;
            tot++;

        }
        else if (vote == 2) {
            B++;
            tot++;
        }
        else if (vote == 3) {
            C++;
            tot++;
        }
        else {
            fale++;
            tot++;
        }


    }
    //输出每个人票数和有效票数
    printf("A=%d\nB=%d\nC=%d\nTot=%d\n", A, B, C, tot - fale);

    //判断当选状况
    if (A > tot / 2) {
        printf("A-yes");
    }
    else if (B > tot / 2) {
        printf("B-yes");
    }
    else if (C > tot / 2) {
        printf("C-yes");
    }
    else {
        printf("all-NO");
    }


}



