#include <stdio.h>

// Recursive function to compute factorial
unsigned long long factorial(int n) {
    if (n < 0) {
        printf("The number is not a non-negative number.");
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the number n:");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("The number is not a non-negative number.\n");
    } else {
        unsigned long long result = factorial(n);
        printf("Factorial of %d is %llu.\n", n, result);
    }

    return 0;
}
