#include <stdio.h>

int main() {
    int arr[5];
    int duplicates[5] = {0}; // Initialize the duplicates array to 0
    int duplicateCount = 1;

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements:\n");
    for (int i = 0; i < 5; i++) {
        if (duplicates[i]) {
            continue;
        }
        int AlreadyCounted = 0;
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                duplicates[j] = 1;
                AlreadyCounted = 1;
            }
        }
        if (AlreadyCounted) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
