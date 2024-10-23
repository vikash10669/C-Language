// pointer and array

#include<stdio.h>
int main(){
 int arr[5] = {5,10,15,20,25};
 int i;
 for(i = 0; i < 5; i++){
    
    //printf("value of arr[%d] = %d\n",i,arr[i]);
  //printf("address of arr[%d] = %p\n",i,&arr[i]);

     printf("value of arr[%d] = ",i);
     printf("%d\n", arr[i]);
     printf("%d\t", *(arr + i));
     printf("%d\t", *(i + arr));
     printf("%d\t", i[arr]);
     printf("address of arr[%d] = %p\n", i, &arr[i]);
  }
  return 0;
}


