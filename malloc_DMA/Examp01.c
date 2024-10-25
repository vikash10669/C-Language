#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements you want:  \n");
    scanf("%d", &n);
    int *p, i;
    p= (int*) malloc(n * sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter the num: \n");
        scanf("%d", (p+i));
    }
    printf("Print number: ");
    for(i = 0; i < n; i++){
        printf("%d\t", *(p+i));
    }
    free(p);
    return 0;
}