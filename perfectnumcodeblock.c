/* A perfect number is a positive number equal to the sum of its proper divisors, excluding the number itself. 
Consider number 6. Its divisors are 1, 2 and 3. Now, the sum of the divisors (excluding 6) equals the number itself. Thus, 6 is a perfect number.
Consider another number, 27. Its divisors are 1, 3 and 9. It is not a perfect number. function to check whether a number is perfect or not. The function returns 1 if the number is perfect else 0. The function prototype is 
int perfect(int);
The algorithm to check whether a number is perfect or not is below.
Step 1: Initialize the sum (s) to 0.
Step 2: For k varying from 1 to n-1, do the following
a). If k divides n perfectly, then add k to s.
Step 3: If s and n are equal, return 1 else return 0. */
#include <stdio.h>
int perfect(int n) {
    int s = 0;
    for (int k = 1; k <= n / 2; k++) {
        if (n % k == 0) {
       s += k;
        }
    }
    if (s == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (perfect(num)) {
        printf("The number is a perfect number.\n");
    } else {
        printf("The number is not a perfect number.\n");
    }
    return 0;
}
