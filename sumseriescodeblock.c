/*a function to compute the equation
a^n + a^(n-1) + a^(n-2) + ... + a^2 + a + 1
The function prototype is 

		int SumSeries(int , int);

The int main() function should take a and n as user input and call the SumSeries function with these values as arguments.*/
#include <stdio.h>
#include <math.h>

int SumSeries(int a, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += pow(a, i);
    }
    return sum;
}

int main() {
    int a, n;
    printf("Enter the values of a and n: ");
    scanf("%d %d", &a, &n);
    int result = SumSeries(a, n);
    printf("The sum is %d.\n", result);
    return 0;
}

