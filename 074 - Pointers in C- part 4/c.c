#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("a = %d, %d, %d, %d \n", a, *p, **q, ***r);

    printf("&p = %x, %x, %x \n", &p, q, *r);

    printf("&q = %x, %x \n", &q, r);

    *p = 20;
    printf("a = %d, %d, %d, %d \n", a, *p, **q, ***r);

    **q = 30;
    printf("a = %d, %d, %d, %d \n", a, *p, **q, ***r);

    ***r = 40;
    printf("a = %d, %d, %d, %d \n", a, *p, **q, ***r);

    return 0;

}