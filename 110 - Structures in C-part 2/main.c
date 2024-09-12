#include<stdio.h>
#include<stdlib.h>

struct student
{
    int rollno;
    float marks;
    char name[20];
}s;

struct
{
    int rollno;
    float marks;
}d,d1;

int main(){

    int a;
    printf("size of a =  %d\n", sizeof(a));

    struct student s1;
    printf("size of s1 =  %d\n", sizeof(s1));

    printf("size of s =  %d\n", sizeof(s));

    printf("size of d =  %d\n", sizeof(d));

    return 0;

}
