// In C, enumeration (or enum) is a user-defined data type that consists of a set of named integer constants. Enumerations improve code readability and maintainability by allowing you to define symbolic names for a set of related values.

#include <stdio.h>

int main() {
    
    enum week { Sunday, Monday, Tuesday=7, Wednesday, Thursday, Friday=20, Saturday };

    enum week today;
    today = Wednesday;
    printf("Day %d of the week\n", today);

    today = Sunday;
    printf("Day %d of the week\n", today);

    today = Friday;
    printf("Day %d of the week\n", today);

    today = Saturday;
    printf("Day %d of the week\n", today);

    return 0;
}
