//Check if the elements on the diagonal of a matrix are distinct.   
#include <stdio.h>
int main() {
    int matrix[10][10], i, j, n, m, flag = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == j) {
                for (int k = i + 1; k < n && k < m; k++) {
                    if (matrix[i][j] == matrix[k][k]) {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag) {
                break;
            }
        }
        if (flag) {
            break;
        }
    }
    if (flag) {
        printf("The elements on the diagonal are not distinct.\n");
    } else {
        printf("The elements on the diagonal are distinct.\n");
    }
    return 0;
}                   