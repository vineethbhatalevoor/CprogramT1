#include <stdio.h>

int main() {
    int matrix[2][2];
    
    // Input elements for the 2x2 matrix
    printf("Enter the elements of the 2 x 2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the input matrix
    printf("Input matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the odd elements in the matrix
    printf("Odd elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matrix[i][j] % 2 != 0) {
                printf("%d\t", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
