#include <stdio.h>

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) {
            return i;       // target found at index i
        }
    }
    return -1;          // target not found
}

int main() {
    int arr[] = {5,2,4,8,3,4,11,26,45,58};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target value: ");
    scanf("%d", &target);

    int index = linear_search(arr, size, target);

    if (index != -1) {
        printf("Target found at index %d\n", index);
    } else {
        printf("Target not found in the array.\n");
    }

    return 0;
}