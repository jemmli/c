/*This program gets a deposit from the user, allows them to bet on a amount of lines (1-3) and multiplies 
their bet by the amount of lines they bet on if the number they say is the one generated. If the user wins they get
 that dollar amount added to their balance. The program ends once the user is out of cash.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

const int MAX_BET = 100;
const int MIN_BET = 1;

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n') {}
}

int deposit() {
    int deposit;
    while (1) {
        printf("Give me a deposit amount $");
        if (scanf("%i", &deposit) != 1 || deposit < 1) {
            printf("Your deposit needs to be a positive dollar amount.\n");
            clear_input_buffer();
        } else {
            clear_input_buffer();
            return deposit;
        }
    }
}

int get_lines_bet_on() {
    int lines;
    while (1) {
        printf("Give me the amount of lines you will bet on (1-3). It will be multiplied by your deposit if you win ");
        if (scanf("%i", &lines) != 1 || lines < 1 || lines > 3) {
            printf("Line amount needs to be between 1 and 3\n");
            clear_input_buffer();
        } else if(lines == 1) {
            clear_input_buffer();
            printf("You bet on %i line\n", lines);
            return lines;
        } else {
            clear_input_buffer();
            printf("You bet on %i lines\n", lines);
            return lines;
        }
    }
}
int get_bet(int deposit, int lines) {
    int bet;
       while (1) {
        printf("How much would you like to bet per line? $");
        if (scanf("%i", &bet) != 1 || bet < MIN_BET || bet > MAX_BET) {
            printf("Your bet needs to be between $%i - %i\n", MIN_BET, MAX_BET);
            clear_input_buffer();
        } else if (bet * lines > deposit) {
            printf("Your total bet is greater than your deposit ($%i). Please provide a valid bet. \n", deposit);
            clear_input_buffer();
        } else {
            clear_input_buffer();
            return bet;
        }
    }
}

int get_user_numbers() {
    int user_number1;
    int user_number2;
    int user_number3;
    int user_numbers[3] = {user_number1, user_number2, user_number3};
    while (1) {
    printf("Give me 3 numbers from 1-100 (put a space between the numbers) ");
    if (scanf("%i %i %i", &user_number1, &user_number2, &user_number3) != 1 || user_number1 < 1 || user_number1 > 100 || user_number2 < 1 || user_number2 > 100 || user_number3 < 1 || user_number3 > 100) {
        printf("Your numbers need to be between 1-100 ");
        clear_input_buffer();
    }
    clear_input_buffer();
    return user_numbers[3];
  }
}


int get_random_numbers() {
    srand(time(NULL));

    int randomnumbers[3];
    printf("The numbers are...\n");
        randomnumbers[0] = rand() % 100 + 1;
        randomnumbers[1] = rand() % 100 + 1;
        randomnumbers[2] = rand() % 100 + 1;
        printf("%i\n%i\n%i\n", randomnumbers[0], randomnumbers[1], randomnumbers[2]);
        return 0;
    }
int main() {
    int balance = deposit();
    int lines = get_lines_bet_on();
    int bet = get_bet(balance, lines);
    int total_bet = bet * lines;
    int prize = total_bet + balance;
    printf("You are betting $%i on %i lines. Total bet is equal to: $%i\n", bet, lines, total_bet);
    int user_numbers = get_user_numbers();
    int numbers = get_random_numbers();
    if (user_numbers(3) == randomnumbers[3]) {
        printf("YOU WON");
        printf("Your current balance is %i", prize);
    }

}


