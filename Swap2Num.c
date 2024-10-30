#include <stdio.h>

//function to swap two numbers
int swap(int *num1, int *num2){
  int res;
  res = *num1;
  *num1 = *num2;
  *num2 = res;
  printf(num1, num2);
}
int main(){
  int num1, num2; //declare two integers

    //take i/p from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

  //print the values of num1 and num2 before swapping
  printf("Before swapping two numbers: ", num1,num2);
  //call the swap function
  swap(&num1, &num2);
  //print the values of num1 and num2 after swapping
  printf("After swapping two numbers: ", num1,num2);

  return 0;
}