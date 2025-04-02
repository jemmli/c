#include <stdio.h>
// always do this. ADD STD TO EVERYTHING
// "gcc code.c -o code" creates a runnable file of the code
// ./'name of runnable file' runs the code

int main() {
    /*
    // Variables
    // integer
    int niceguy = 10;
    // one letter
    char character = 'e';

    niceguy = 9;

    printf("number of nice guys: %i \nfunny character: %c \n", niceguy, character);

*/
// %i is a placeholder for an integer u need it for printing a variable
// just % with first letter of variable type usually
// /n to put thing on new line (doesn't have to be in a specific spot)

    for (int i = 0; i < 10; i++) {
        if (i == 8) {
            printf("I LOVE JEMMY: %i\n", i);
        }
    }
// i is a variable that is an integer. i < 10 is saying that while i < 10 do the loop. i++ means add 1. You can also do +2 +3, etc.
// printf() not just print()
/*
    struct JemmyData {
        int number;
        int number2;
    };
    // Structure is a box and you store the variables in there.

    struct JemmyData jemmy(int firstnumber, int secondnumber) {
        struct JemmyData jemmy;
        jemmy.number = firstnumber;
        jemmy.number2 = secondnumber;

        return jemmy;
    }

    int function() {
        return 0;
    }

    int thing = 100;
    int thing2 = 200;
    struct JemmyData jemmyd = jemmy(thing, thing2);
    printf("%i, %i", jemmyd.number, jemmyd.number2);


    return 2;
*/
}