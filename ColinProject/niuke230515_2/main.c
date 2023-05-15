#include <stdio.h>

int main(void) {
    /*1.把碰到边界的情况分成四种，用dir来储存方向，分为向右，和向下
     * 11.碰到上边界，方向向右，列加一    22.碰到上边界，方向向下，行加一，列减一
     * 33.碰到左边界，方向向下，行加一    44.碰到左边界，方向向右，行减一，列加一
     * 其他情况 11.方向向右，行减，列加   22.方向向左，行加，列减【前面的条件要先判断，这两个要放在最后】
     * */
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int row = 0, col = 0, dir = 1;
    int num = 1;
    arr[0][0] = num;
    while (num < n * n) {   //【这里报了段错误】
        /*在之前的代码中，如果 num 的条件使用 <=，会导致循环在 num 达到 n * n 时仍然进行一次迭代，
         * 而此时数组 arr 的索引已经越界，从而导致段错误。
        通过将 while 循环的条件改为 <，确保循环在 num 达到 n * n 前终止，
         避免了越界访问，从而解决了段错误的问题。*/


        if (col == n - 1 && dir == 1) {
            arr[++row][col] = ++num;
            dir = -1;
        } else if (row == n - 1 && dir == -1) {
            arr[row][++col] = ++num;
            dir = 1;

        } else if (row == 0 && col < n - 1 && dir == 1) {
            arr[row][++col] = ++num;
            dir = -1;
        } else if (col == 0 && row < n - 1 && dir == -1) {
            arr[++row][col] = ++num;
            dir = 1;
        } else if (dir == 1) {
            arr[--row][++col] = ++num;
        } else if (dir == -1) {
            arr[++row][--col] = ++num;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}