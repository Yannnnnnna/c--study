#include <stdio.h>
/*代码解析：

首先定义一个二维数组 matrix，用于存储回型矩阵。
使用四个变量 startRow、endRow、startCol、endCol 来跟踪当前回型矩阵的边界。
使用 while 循环，当 startRow 小于等于 endRow 且 startCol 小于等于 endCol 时，进行矩阵填充。
在循环中，分为四个步骤：
从左到右，将数字逐个填入上边的行。
从上到下，将数字逐个填入右边的列。
从右到左，将数字逐个填入下边的行。
从下到上，将数字逐个填入左边的列。
每填入一个数字，递增 num 的值。
最后，使用两个嵌套的循环遍历二维数组 matrix，并打印每个元素，形成回型矩阵的输出结果。*/

int main() {
    printf("Please input the number: \n");
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    int startRow = 0, endRow = n-1, startCol = 0, endCol = n - 1;
    int num = 1;
    while (startRow <= endRow && startCol <= endCol){
        //向右填充
        for (int i = startCol; i <= endCol; i++) {
            matrix[startRow][i] = num++;
        }
        startRow++;
        
        //向下填充
        for (int i = startRow; i <= endRow; i++) {
            matrix[i][endCol] = num++;
        }
        endCol--;
        //向左填充
        for (int i = endCol; i >= startCol ; i--) {
            matrix[endRow][i] = num++;
        }
        endRow--;
        //向上填充
        for (int i = endRow; i>= startRow; i--) {
            matrix[i][startCol] = num++;
        }
        startCol++;
    }
    //打印
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
