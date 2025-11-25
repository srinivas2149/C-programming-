
#include <stdio.h>

/* Bubble sort - ascending order */
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                swapped = 1;
            }
        }
        /* If no two elements were swapped by inner loop, array is sorted */
        if (!swapped) break;
    }
}

/* Iterative binary search
   Returns index of key in arr (0-based) or -1 if not found */
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    /* Sort the array first */
    bubbleSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    printf("\n");

    int key;
    printf("Enter value to search: ");
    scanf("%d", &key);

    int idx = binarySearch(arr, n, key);
    if (idx != -1)
        printf("Element %d found at index %d (0-based) in the sorted array.\n", key, idx);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
