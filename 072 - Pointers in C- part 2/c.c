#include<stdio.h>

int main(){

    int a=10,b=a;
    int *p,*q;

    p = &a;
    q = &b;

    printf("value of a = %d \n", a);
    printf("value of a = %d \n", *p);

    printf("address of a = %x \n", &a);
    printf("address of a = %x \n", p);

    printf("value of b = %d \n", b);
    printf("value of b = %d \n", *q);

    printf("address of b = %x \n", &b);
    printf("address of b = %x \n", q);

    int c = *q;
    *q = 20;

    printf("value of c = %d \n", c);

    printf("value of b = %d \n", b);
    printf("value of b = %d \n", *q);

    printf("address of b = %x \n", &b);
    printf("address of b = %x \n", q);

    return 0;

}