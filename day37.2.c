//Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int matrix[10][10], transpose[10][10], row, col, i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    // Finding the transpose of the matrix
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}   