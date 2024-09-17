#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i,*ptr;

    printf("Enter total no. of values : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));

    if( ptr == NULL ){
        printf("memory not allocated\n");
    }
    else{
        printf("memory allocated succssfully\n");
    }

    printf("Enter the values : \n");
    for(i=0;i<n;i++){
        printf("Enter value %d : ",i+1);
        scanf("%d",(ptr+i));
    }

    printf("\nvalues : ");
    for(i=0;i<n;i++){
        printf(" %d ",*(ptr+i));
    }

    free(ptr);

    printf("\nvalues : ");
    for(i=0;i<n;i++){
        printf(" %d ",*(ptr+i));
    }

    return 0;

}