#include <stdio.h>

int main() {
    int num, sum = 0, rem;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    while (num != 0) {
        rem = num % 10;   
        sum += rem;      
        num /= 10; 
    }
    printf("The sum of the digits is: %d\n", sum); 
   
    return 0;
}
