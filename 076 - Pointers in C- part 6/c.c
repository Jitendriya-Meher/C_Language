#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int *q = &arr[0];

    int *r = &arr[4];

    printf(" %d \n",*r);
    r-=1;
    printf(" %d \n",*r);

    r=r-1;
    printf(" %d \n",*r);

    r--;
    printf(" %d \n",*r);

    printf(" p-r = %d \n",p-r);

    printf(" r-p = %d \n",r-p);

    return 0;

}