#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int *q = &arr[0];

    for( int i = 0; i < 5; i++){
        printf("%d ",*p);
        p = p+1;
    }

    for( int i = 0; i < 5; i++){
        printf("%d ",*q);
        q++;
    }
    
    // pointer addition is not possible
    // q = p+q;

    return 0;

}