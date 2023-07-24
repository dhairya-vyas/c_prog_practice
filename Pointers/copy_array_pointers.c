#include <stdio.h>

#define MAX_SIZE 100

void printArray(int arr[], int size);

int main() {
    printf("\nC Prog to Copy Array into Another Array using Pointers\n");
    printf("----------------------------------------\n");

    int i, n;
    int arr1[MAX_SIZE], arr2[MAX_SIZE];

    int *arr1_ptr = arr1;
    int *arr2_ptr = arr2;

    printf("\nEnter the number of elements of the Array: ");
    scanf("%d", &n);

    printf("\nEnter the Elements of Array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (arr1_ptr + i));
    }

    printf("\nThe Elements of 1st Array before copying are: ");
    printArray(arr1, n);

    printf("\nThe Elements of 2nd Array before copying are: ");
    printArray(arr2, n);

    // Copy elements from arr1 to arr2
    for (i = 0; i < n; i++) {
        *(arr2_ptr + i) = *(arr1_ptr + i);
    }

    printf("\nThe Elements of 1st Array after copying are: ");
    printArray(arr1, n);

    printf("\nThe Elements of 2nd Array after copying are: ");
    printArray(arr2, n);

    return 0;
}

void printArray(int *arr, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}
