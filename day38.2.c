//Check if a matrix is symmetric
#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    bool isSymmetric = true;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[10][10];

    cout << "Enter the elements of the matrix:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}       