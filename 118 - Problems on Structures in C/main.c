#include<stdio.h>

struct ques
{
    int a;
    float b;
    int c;
};

int main(){

    struct ques a = {1,2.2,3};
    printf("%d %f %d\n",a.a,a.b,a.c);

    struct ques q = {.b=1,.c=10,.a=19};
    printf("%d %f %d",q.a,q.b,q.c);

    return 0;
}