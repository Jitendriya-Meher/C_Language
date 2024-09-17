#include<stdio.h>
#include<stdlib.h>

// A memory leak in C occurs when a program allocates memory dynamically using functions like malloc(), calloc(), or realloc() but fails to free the allocated memory using free() when it is no longer needed. This results in the memory being inaccessible to the program, even though it hasn't been returned to the system. Over time, if a program keeps allocating memory without releasing it, the system could run out of memory, potentially causing performance degradation or crashes.

// Causes of Memory Leaks:
// Missing free(): Failing to call free() on dynamically allocated memory.
// Lost Pointer Reference: Losing the reference to dynamically allocated memory before freeing it.
// Double malloc() without free(): Allocating memory multiple times without freeing the previous allocations.
// Cyclic Dependencies: Sometimes, two or more blocks of memory reference each other, and their reference counters do not drop to zero, preventing them from being freed.


// How to Prevent Memory Leaks:
// Always free memory: Ensure that every malloc() or calloc() is paired with a corresponding free().
// Use Valgrind: A tool like Valgrind can help detect memory leaks and memory misuse in C programs.
// Keep track of pointers: Always ensure you keep track of the pointers to dynamically allocated memory and free them once they are no longer needed.
// Avoid unnecessary allocations: Allocate memory only when necessary and avoid allocating large chunks of memory if they are not required.


int main(){

    int ch = 1;
    int *ptr;

    while ( ch==1)
    {
        printf("Memory leak demo\n");
        ptr = (int*)malloc(40000*sizeof(int));

        if( ptr == NULL ){
            printf("Memory not allocated\n");
        }
        else{
            printf("Memory allocated successfully\n");
        }

        free(ptr);

        printf("continue ?? press 1 for continue : ");
        scanf("%d",&ch);

    }

    return 0;

}