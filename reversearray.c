#include <stdio.h>

// Function to reverse the array
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[10], n;
    printf("Enter the size of the array (<10): ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    reverse(arr, n);
    
    printf("The reversed array elements are:\n");
    for (int i = 0; i < n; i++) { // Fixed "end" to "n"
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
