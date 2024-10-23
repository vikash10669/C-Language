// By using function, find fibonacci Series
#include<stdio.h>
void fibo(int,int*);
int main(){
    printf("Enter the number upto fibonacci series you print: ");
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    fibo(n, arr);
    for(int i = 0; i <= n; i++){
        printf("arr[%d]= %d\n", i, arr[i]);
    }
  
}
void fibo(int n, int *arr)
{
   *arr = 0;
   *(arr + 1) = 1;
   if(n > 1)
        for(int i = 2; i <= n; i++){
            *(arr + i) = *(arr + (i-1)) + *(arr + (i-2));
        }
    
}

