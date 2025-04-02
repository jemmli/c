#include <stdio.h>

int main() {
    int number;
    printf("Give me a number ");
    scanf("%i", &number);

    if (number % 2 == 0)
        printf("Number is even \n");
    else
        printf("Number is odd \n");
    return 0;
}