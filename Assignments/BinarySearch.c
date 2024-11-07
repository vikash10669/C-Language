#include <stdio.h>

int Binary_Search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;     // target found
        } 
        else if (arr[mid] < target)
        {
            left = mid + 1;   // target might be on the right
        } 
        else {
            right = mid - 1;    // target might be on the left
        }
    }

    return -1;      // target not found
}

int main() {
    int arr[] = {2, 3, 6, 8, 10, 29, 37, 45, 48, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target value: ");
    scanf("%d", &target);

    int index = Binary_Search(arr, size, target);

    if (index != -1) 
    {
        printf("Target found at index %d\n", index);
    } 
    else {
        printf("Target not found in the array.\n");
    }

    return 0;
}