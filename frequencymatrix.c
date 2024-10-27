#include <stdio.h>

int main() {
    int matrix[2][2];
    int frequency[10] = {0}; // Assuming the elements are between 0 and 9 for simplicity

    // Input elements for the 2x2 matrix
    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix to confirm input
    printf("Matrix entered:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the frequency of each element
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            frequency[matrix[i][j]]++;
        }
    }

    // Print the frequency array
    printf("Frequency of elements:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Element %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
