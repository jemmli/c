#include <stdio.h>

int main() {
    /*
    int numbers[] = {25, 50, 75, 100};
    printf("%i\n", numbers[3]);
    return 0;
    */
    int number = 40;
    (number < 30) ? printf("Hello \n") : printf("\"number isn't less than 30 \"\n");
// \" puts quotes around the print, but you need to put it on both sides of the print statement
    do {
        printf("%i\n", number);
        number++;
    }
    // you could also put the code in the do statement beside the while statement and it will still work like this
    // while (number < 50) {printf("%i\n", number); number++;}
    while (number < 50) {
        printf("%i\n", number); 
        number+++;
    }

// for loop example
// you have to identify the variable as an integer, variable, character, float, etc before using for. 
// The first part of the for loop doesn't create a variable i, but it says that i is 0.
    int i;

    for (i = 0; i < 5; i++) {
        printf("%i\n", i);
    }
//
}