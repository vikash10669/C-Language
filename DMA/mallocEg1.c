#include<stdio.h>          //include standard ip/op library for printf and scanf
#include<stdlib.h>         //include standard library for memory allocation functions

int main(){
    int n;
    printf("Enter the number of elements you want:  \n");
    scanf("%d", &n);
    int *p, i;
    p= (int*) malloc(n * sizeof(int));     // allocate memory for n integers

// using for loop to get n number of integer from user.
    for(i=0; i<n; i++){
        printf("Enter the num: \n");
        scanf("%d", (p+i));              // read an integer and store it in the allocated memory
    }
    printf("Print number: ");
// enter the numbers
    for(i = 0; i < n; i++){
        printf("%d\t", *(p+i));         // obtain the address of a data item held in another location from the pointer to get the value & print it.
    }
    free(p);
    return 0;
}