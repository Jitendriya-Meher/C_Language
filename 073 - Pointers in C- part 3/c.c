#include<stdio.h>

int main(){

    float a = 10, b=5;
    float *p,*q;
    p=&a;
    q=p;

    printf("a = %f , %f, %f\n", a, *p, *q);

    *p = *q;
    printf("a = %f , %f, %f\n", a, *p, *q);

    return 0;

}