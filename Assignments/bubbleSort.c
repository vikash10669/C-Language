#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // iterate through all array elements
    for (i = 0; i < n - 1; i++) {
        // last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Traverse the array from 0 to n-i-1
            // Swap if the element found is greater
            // than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {44, 20, 15, 18, 23, 11, 10};
    int n = sizeof(arr) / sizeof(arr[0]);       // calculate the sizes of the arrays

    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}