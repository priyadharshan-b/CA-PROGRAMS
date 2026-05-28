#include <stdio.h>

int main() {
    int i, j, n, a[30], temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal order: ");
    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}
