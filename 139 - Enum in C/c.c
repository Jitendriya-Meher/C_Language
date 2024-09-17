#include <stdio.h>

enum xenom{c,cpp,java,python,js,html,css};

enum yenum{xenom};

int main() {
    
    enum xenom var;
    printf("size = %d\n",sizeof(var));

    enum yenum v;
    printf("size = %d",sizeof(v));

    return 0;
}
