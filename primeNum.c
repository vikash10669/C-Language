#include<stdio.h>
int main(){
    int num, isPrime = 1;
    printf("Enter the number\n");
    scanf("%d", &num);

   if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;         // Number is divisible by i, hence not prime
                break;
            }
        }
    }
    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}