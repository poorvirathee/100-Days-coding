//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int matrix[10][10], i, j, n, sum = 0;
    printf("Enter the number of rows (and columns) of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("The sum of the main diagonal elements is: %d\n", sum);
    return 0;
}                       