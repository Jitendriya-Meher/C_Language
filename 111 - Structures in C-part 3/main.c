#include<conio.h>

struct student{
    int rno;
    char name[20];
    float marks;
}
s1 = {12,"jiten",99.88},
s2 = {2,"JM",78};

void print( struct student s){
    printf("\n\nRoll No : %d",s.rno);
    printf("\nName : %s",s.name);
    printf("\nMarks : %.2f",s.marks);
}

int main(){

    struct student s = {1,"amit",89.509};
    print(s);

    print(s1);
    print(s2);

    struct student s3;
    print(s3);

    struct student s4 = s;
    print(s4);

    return 0;

}