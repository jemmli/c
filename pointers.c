// Explanation of pointers
/* Pointers put an address on the variable you put a pointer on. This means it can be used to
print without needing to use the variable name to print it. 
*/

#include <stdio.h>

int main() {
    int value = 20;
    int *ptr = &value;

    printf("Value via pointer: %i\n", *ptr);
    printf("Memory address of pointer: %p\n", &ptr);
    printf("Memory address of pointer: %p\n", ptr);
    return 0;
}