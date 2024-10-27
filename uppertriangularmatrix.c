#include <stdio.h>
#define SIZE 3 // Define the size of the matrix

int isUpperTriangular(int matrix[SIZE][SIZE], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0; // Return 0 if any element below the diagonal is not zero
            }
        }
    }
    return 1; // Return 1 if all elements below the diagonal are zero
}

int main() {
    int matrix[SIZE][SIZE];
    printf("Enter elements of the %dx%d matrix:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isUpperTriangular(matrix, SIZE)) {
        printf("The matrix is an upper triangular matrix.\n");
    } else {
        printf("The matrix is not an upper triangular matrix.\n");
    }

    return 0;
}
