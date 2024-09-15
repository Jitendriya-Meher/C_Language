#include<stdio.h>

typedef struct student{
    int rno;
    char name[20];
    float marks;
}stu;

int main(){

    stu s = {1,"Amit",98.5};
    printf("%d %s %f\n",s.rno,s.name,s.marks);

    typedef int integer;
    integer i = 5;
    printf("%d",i);

    return 0;

}