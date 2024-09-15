#include<stdio.h>

struct student
{
    int rno;
    char name[20];
    float marks;
};

int main(){

    struct student s[3];

    for( int i=0; i<3; i++ ){
        printf("Enter roll no of student %d : ", i+1);
        scanf("%d",&(s[i].rno));
        printf("Enter name no of student %d : ", i+1);
        scanf("%s", &(s[i].name));
        printf("Enter marks no of student %d : ", i+1);
        scanf("%f", &(s[i].marks));
    }

    for( int i=0; i<3; i++){
        printf("student %d : \n", i+1);
        printf("rol no : %d \n",s[i].rno);
        printf("name : %s \n",s[i].name);
        printf("marks : %f \n\n",s[i].marks);
    }

    return 0;

}
