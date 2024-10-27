#include <stdio.h>

// Function prototypes
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);

int main() {
    int size;

    // Read the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    // Read the arrays
    printf("Enter elements of the first array:\n");
    inputArray(arr1, size);
    printf("Enter elements of the second array:\n");
    inputArray(arr2, size);

    // Print arrays before swapping
    printf("Arrays before swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    // Swap arrays
    swapArray(arr1, arr2, size);

    // Print arrays after swapping
    printf("Arrays after swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    return 0;
}

// Function to read elements into an array
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print elements of an array
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to swap two arrays
void swapArray(int *sourceArr, int *destArr, int size) {
    for (int i = 0; i < size; i++) {
        int temp = sourceArr[i];
        sourceArr[i] = destArr[i];
        destArr[i] = temp;
    }
}
