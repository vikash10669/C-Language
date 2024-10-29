#include<stdio.h>
#include<stdlib.h>

//function to calculate GCD
int gcd(int a, int b){
    while(b != 0)
    {
        int rem = b;    //store remainder of a divided by 'b'
        b = a % b;      //update 'b' to be the remainder of 'a' divided by 'b'
        a = rem;        //original value of 'b' store in 'a' (which is stored in temp)
    }
    return a;       //return 'a', when b=0
}
int main(){
    int num1, num2;
    
    //input from user
    printf("Enter two numbers:- ");
    scanf("%d %d", &num1, &num2);

    int res = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", &num1, &num2, &res);

    return 0;
}