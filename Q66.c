#include <stdio.h>

// Function to check if an element is already present in an array
int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6, 2};
    int arr2[] = {2, 3, 5, 7};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionArr[n1 + n2];
    int k = 0;
    for (int i = 0; i < n1; i++) {
        if (!isPresent(unionArr, k, arr1[i])) {
            unionArr[k] = arr1[i];
            k++;
        }
    }
    for (int i = 0; i < n2; i++) {
        if (!isPresent(unionArr, k, arr2[i])) {
            unionArr[k] = arr2[i];
            k++;
        }
    }
    printf("Union of the two arrays: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}