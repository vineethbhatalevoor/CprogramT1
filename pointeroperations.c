#include <stdio.h>

int main() {
    // a. Pointer to a floating point constant
    const float *fp;

    // b. Constant pointer to a floating point variable
    float val = 5.5;
    float * const cfp = &val;

    // c. Constant pointer and pointer to a floating point constant
    const float * const cptr = &val;

    // Test cases
    float another_val = 10.5;
    
    // a. Pointer to a floating point constant
    fp = &val;
    printf("fp points to: %f\n", *fp);
    // Change pointer to point to another_val
    fp = &another_val;
    printf("fp now points to: %f\n", *fp);

    // b. Constant pointer to a floating point variable
    printf("cfp points to: %f\n", *cfp);
    // Change the value pointed to by cfp
    *cfp = 6.6;
    printf("Value at cfp: %f\n", *cfp);

    // c. Constant pointer and pointer to a floating point constant
    printf("cptr points to: %f\n", *cptr);
    // Cannot change pointer or value as both are constants

    // Observations:
    FILE *fptr;
    fptr = fopen("observations.txt", "w");
    fprintf(fptr, "fp initially points to val: %f\n", *fp);
    fprintf(fptr, "fp changed to point to another_val: %f\n", *fp);
    fprintf(fptr, "cfp points to val: %f\n", *cfp);
    fprintf(fptr, "cfp value changed to: %f\n", *cfp);
    fprintf(fptr, "cptr points to val: %f\n", *cptr);
    fprintf(fptr, "cptr cannot change pointer or value as both are constants\n");
    fclose(fptr);

    return 0;
}
