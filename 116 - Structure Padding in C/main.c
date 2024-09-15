#include<stdio.h>

typedef struct student1
{
    char d;
    int a;
    float c;
    char b;
}stu1;

typedef struct student2
{
    char b;
    char d;
    int a;
    float c;
}stu2;


int main(){

    printf("%d\n",sizeof(stu1));

    printf("%d\n",sizeof(stu1));


    return 0;
}