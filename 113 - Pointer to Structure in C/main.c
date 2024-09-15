#include<stdio.h>

struct student
{
    int rno;
    char name[20];
    float marks;
};

int main(){

    struct student s;
    s.rno = 12;

    printf("%d", s.rno);
    
    struct student *ptr = &s;
    ptr->rno = 1234;

    printf("\n%d", s.rno);
    printf("\n%d", ptr->rno);

    return 0;

}