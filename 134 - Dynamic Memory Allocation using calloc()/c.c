#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i,*ptr;

    printf("Enter total no. of values : ");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));

    printf("Enter the values : \n");
    for(i=0;i<n;i++){
        printf("Enter value %d : ",i+1);
        scanf("%d",(ptr+i));
    }

    printf("values : ");
    for(i=0;i<n;i++){
        printf(" %d ",*(ptr+i));
    }

    free(ptr);

    return 0;

}