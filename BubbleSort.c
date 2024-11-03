#include <stdio.h>
// using function for bubble sort
void bubble_sort(int arr[], int num) 
{  
    for (int i = 0; i < num - 1; i++) {             // loop through each element in the array
        for (int j = 0; j < num - i - 1; j++) {     // last i elements are already sorted           
            if (arr[j] > arr[j + 1]) 
            {
                // swap, if the element found is greater than the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// function to print the array
void print_array(int arr[], int size)
 {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main() {
    int arr[] = {18, 6, 45, 7, 56, 30}; 
    int n = sizeof(arr) / sizeof(arr[0]); // calculate the number of elements in the array

    printf("Unsorted Array: \n");
    print_array(arr, n);

    bubble_sort(arr, n); 

    printf("Sorted Array: \n");
    print_array(arr, n); 
    return 0; 
}
