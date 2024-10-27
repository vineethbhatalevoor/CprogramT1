/*C program that accepts two 2x3 matrices and prints their sum*/
#include <stdio.h>

int main() {
    int first[2][3], second[2][3], sum[2][3];

    // Input elements for the first matrix
    printf("Enter the elements of the first 2 x 3 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter the elements of the second 2 x 3 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    // Output the sum of the matrices
    printf("The sum of the arrays are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
