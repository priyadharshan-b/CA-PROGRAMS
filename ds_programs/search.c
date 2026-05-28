#include <stdio.h>

int LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, position, choice;

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the Element to Search: ");
    scanf("%d", &key);

    printf("Select the Search method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            position = LinearSearch(arr, n, key);
            if (position != -1)
                printf("Element %d found at index %d\n", key, position);
            else
                printf("Element not found\n");
            break;
        case 2:
            position = BinarySearch(arr, n, key);
            if (position != -1)
                printf("Element %d found at index %d\n", key, position);
            else
                printf("Element not found\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
