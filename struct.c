#include <stdio.h>

struct mystructure {
    int mynum;
    char myLetter;
    // defines a structure which can store different variables
};
int main() {
    struct mystructure s1;
    // creates a variable for the function mystructure
    s1.mynum = 13;
    s1.myLetter = 'B';
    // says that mynum in the function mystructure = 13 and myLetter in the function mystructure = B

    printf("My number is %i\n", s1.mynum);
    printf("My letter is %c\n", s1.myLetter);
    // prints the value and letter usng the variable of the structure
    return 0;
}
// Why use structures? It decreases the amount of times you need to define a variable since you can just call on the structure the variable is in