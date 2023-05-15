#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int n;
    printf("请输入一个整数n：");
    scanf("%d", &n);
    int matrix[1000][1000];  // 假设矩阵最大为1000x1000
    int num = 1;
    int row = 0, col = 0;
    int direction = 1;

    for (int i = 1; i <= n * n; i++) {
        matrix[row][col] = num++;

        if (direction == 1) {
            if (col == n - 1) {
                direction = -1;
                row++;
            }
            else {
                col++;
            }
        }
        else {
            if (col == 0) {
                direction = 1;
                row++;
            }
            else {
                col--;
            }
        }
    }

    // 输出矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
