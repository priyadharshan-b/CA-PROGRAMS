#include <stdio.h>
#include <stdlib.h>

int a[100], n;

int max(int a[], int k, int n) {
    int loc, j, max;
    max = a[k];
    loc = k;
    for (j = k + 1; j <= n - 1; j++) {
        if (max < a[j]) {
            max = a[j];
            loc = j;
        }
    }
    return (loc);
}

void insertion_sort(int a[], int n) {
    int pass, k, temp, j;
    for (pass = 1; pass < n; pass++) {
        k = a[pass];
        for (j = pass - 1; j >= 0 && k > a[j]; j--)
            a[j + 1] = a[j];
        a[j + 1] = k;
    }
}

void acceptInput() {
    int i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void display() {
    int i;
    printf("\n The Sorted Array is: ");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
}

void main() {
    int k, temp, loc, ch;
    while (1) {
        printf("\n Sorting Techniques");
        printf("\n************************");
        printf("\n 1. Insertion Sort ");
        printf("\n 2. Selection Sort ");
        printf("\n 3. Exit ");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                acceptInput();
                insertion_sort(a, n);
                display();
                break;
            case 2:
                acceptInput();
                for (k = 0; k < n; k++) {
                    loc = max(a, k, n);
                    temp = a[k];
                    a[k] = a[loc];
                    a[loc] = temp;
                }
                display();
                break;
            case 3:
                exit(0);
        }
    }
}
