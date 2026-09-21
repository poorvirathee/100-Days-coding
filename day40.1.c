//Perform diagonal traversal of a matrix
#include <stdio.h>

int main() {
    int matrix[10][10], i, j, n;
    printf("Enter the number of rows (and columns) of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    return 0;
}                       