#include <stdio.h>
#include <math.h>

// Function to compute the perimeter of the triangle
float computePerimeter(float a, float b, float c) {
    return a + b + c;
}

// Function to compute the area of the triangle
float computeArea(float a, float b, float c) {
    float s = 0.5 * (a + b + c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    float perimeter = computePerimeter(a, b, c);
    float area = computeArea(a, b, c);
    
    printf("The perimeter of the triangle is %.2f units.\n", perimeter);
    printf("The area of the triangle is %.2f units.\n", area);
    
    return 0;
}
