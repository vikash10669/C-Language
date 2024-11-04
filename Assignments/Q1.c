#include <stdio.h>

void sumarr(int a[], int b[], int res[], int size) {
    for (int i = 0; i < size; i++) {
        res[i] = a[i] + b[i];     // add corresponding elements
    }
}

int main() {
    int a[] = {6, 5, 9}; 
    int b[] = {2, 8, -4}; 
    int size = 3;            // size of the arrays
    int res[size];            // resultant array

    // Call the sumarr function
    sumarr(a, b, res, size);

    // Print the result
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
// Output
// Resultant array: 8 13 5
