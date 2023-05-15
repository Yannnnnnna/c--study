#include <stdio.h>
//统计二进制中1的个数
int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    //【重点】  通过和1按位与，可以判断最后一位是否为一，然后再向右移动i位，
    //          一共循环32次，判断每一位的情况，并计数
    //【tips】    按位与不会改变n的值
    for (int i = 0; i < 32; ++i) {
        if((n >> i) & 1 == 1){
            count++;
        }
    }
    printf("%d %d", count, n);

}
