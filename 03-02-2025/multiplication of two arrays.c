#include <stdio.h>

void multiplyArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result[size];

    multiplyArrays(arr1, arr2, result, size);

    printf("Result of array multiplication:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
