
// Program: Insert into Sorted Array
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;   // current size
    int value = 35;
    int i;

    // Find position to insert
    for (i = n - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = value;
    n++;

    // Display array after insertion
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
