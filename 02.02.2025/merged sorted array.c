#include <stdio.h>

void merge_sorted(int arr1[], int arr2[], int size1, int size2) {
    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }
    while (i < size1) printf("%d ", arr1[i++]);
    while (j < size2) printf("%d ", arr2[j++]);
    printf("\n");
}

int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter first sorted array: ");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter second sorted array: ");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Merged sorted array: ");
    merge_sorted(arr1, arr2, n1, n2);
    return 0;
}
