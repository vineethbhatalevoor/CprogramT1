#include <stdio.h>

// Function prototype
float *findMax(float A[], int size);

int main() {
    float array[5];
    int i;

    // Input elements into the array
    printf("Enter 5 float numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &array[i]);
    }

    // Find the maximum element
    float *max = findMax(array, 5);
    
    // Print the maximum element
    printf("The maximum element is: %.2f\n", *max);

    return 0;
}

// Function to find the maximum element in an array
float *findMax(float A[], int size) {
    int i;
    float *max = &A[0];

    for (i = 1; i < size; i++) {
        if (A[i] > *max) {
            max = &A[i];
        }
    }

    return max;
}
