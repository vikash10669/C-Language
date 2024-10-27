#include<stdio.h>
int main(){
    int num, isPrime = 1;    //declare an Integer "num" & "isPrime" initialized to 1(true)
    printf("Enter the number\n");      
    scanf("%d", &num);      //read an integer input from the user and store it in "num"

   if (num <= 1) {
        isPrime = 0;         // Numbers less than or equal to 1 are not prime
    } else {

        // Check for factors from 2 to sqrt(num)
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;         // Number is divisible by i, hence num is not prime
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