#include <stdio.h>

int main() {
    int n = 10; 
    int matrix[10][10];
    int num = 1;
    int start_col = 0;
    int end_col = n - 1;
    int start_row = 0;
    int end_row = n - 1;

    while (num <= n * n) {
        for (int i = start_col; i <= end_col; i++) {
            matrix[start_row][i] = num++;
        }
        for (int i = start_row + 1; i <= end_row; i++) {
            matrix[i][end_col] = num++;
        }
        for (int i = end_col - 1; i >= start_col; i--) {
            matrix[end_row][i] = num++;
        }
        for (int i = end_row - 1; i > start_row; i--) {
            matrix[i][start_col] = num++;
        }
        start_col++;
        end_col--;
        start_row++;
        end_row--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}