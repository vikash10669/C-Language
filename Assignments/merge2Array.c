#include <stdio.h>

void merge_sorted_arrays(int arr1[], int m, int arr2[], int n, int merged_arr[]) {
    // initialize pointers for both arrays
    int i = 0, j = 0, k = 0;

    // traverse both arrays and add the smaller element to merged_arr
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k++] = arr1[i++];
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    // if any elements remain in arr1, add them to merged_arr
    while (i < m) {
        merged_arr[k++] = arr1[i++];
    }

    // if any elements remain in arr2, add them to merged_arr
    while (j < n) {
        merged_arr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int merged_arr[m + n];        // declare the merged array to store the result

    // merge the two sorted arrays
    merge_sorted_arrays(arr1, m, arr2, n, merged_arr);

    // print the merged the two arrays
    printf("Merged Array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}