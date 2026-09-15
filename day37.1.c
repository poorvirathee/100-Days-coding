//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int matrix[3][3], sum[3] = {0}, i, j;

    // Input elements of the matrix
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of each row:\n");
    for (i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}   