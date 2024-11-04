#include <stdio.h>

void sumarr(int a[], int b[], int r[], int size) 
{
    for (int i = 0; i < size; i++) {
        r[i] = a[i] + b[i];     // add corresponding elements
    }
}

int main() {

    int a[] = {3, 5, 9}; 
    int b[] = {2, 6, -8}; 
    int size = 3;            // size of the arrays
    int r[size];            // resultant array

    // Call the sumarr function
    sumarr(a, b, r, size);

    // Print the result
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", r[i]);
    }
    printf("\n");

    return 0;
}
