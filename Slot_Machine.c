/*This program gets a deposit from the user, allows them to bet on a amount of lines (1-3) and multiplies 
their bet by the amount of lines they bet on if the number they say is the one generated. If the user wins they get
 that dollar amount added to their balance. The program ends once the user is out of cash.*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar() != '\n' && c != EOF)) {}
}

int deposit() {
    int deposit;
    while (1) {
        printf("Give me a deposit amount $");
        if (scanf("%i", &deposit) != 1 || deposit <= 1) {
            printf("Your deposit needs to be a positive dollar amount.\n");
            clear_input_buffer;
        }
    return deposit;
    }
}

int get_lines_bet_on() {
    int lines;
    while (1) {
        printf("Give me the amount of lines you will bet on (1-3). It will be multiplied by your deposit ");
        if (scanf("%i", &lines) != 1 || lines <= 1 || lines >= 3) {
            printf("Line amount needs to be between 1 and 3\n");
            clear_input_buffer;
        } else {
        printf("You bet on %i lines\n", lines);
        return lines;
        }
    }
}
/*
int balance() {
    balance = deposit();
}
*/
int main() {
    deposit();
    get_lines_bet_on();
}