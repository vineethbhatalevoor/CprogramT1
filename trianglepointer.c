#include <stdio.h>
#include <math.h>

// Function prototype
void area_peri(float x, float y, float z, float *s, float *p);

int main() {
    float a, b, c, area, perimeter;

    // Take inputs for the sides of the triangle
    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Call the function to compute area and perimeter
    area_peri(a, b, c, &area, &perimeter);

    // Print the computed area and perimeter
    printf("Area of the triangle: %.2f\n", area);
    printf("Perimeter of the triangle: %.2f\n", perimeter);

    return 0;
}

// Function to compute area and perimeter
void area_peri(float x, float y, float z, float *s, float *p) {
    // Calculate the perimeter
    *p = x + y + z;

    // Check if the sides form a valid triangle
    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        // Calculate the semi-perimeter
        float semi_perimeter = *p / 2;

        // Calculate the area using Heron's formula
        *s = sqrt(semi_perimeter * (semi_perimeter - x) * (semi_perimeter - y) * (semi_perimeter - z));
    } else {
        // If not a valid triangle, set area to 0
        *s = 0;
        printf("The given sides do not form a valid triangle.\n");
    }
}
