#include <stdio.h>

// Function prototype
void swap(int *p, int *q);

int main() {
    int a, b;

    // Take two integers as user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Print the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

// Function to swap numbers using call-by-reference
void swap(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
