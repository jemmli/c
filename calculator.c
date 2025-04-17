#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char operation[20];
    char operator;
    char trig;
    int number1, number2;
    int result;

    printf("Enter the type of operation: A for Arithmetic, T for Trigonometry, G for Graphing\n");
    scanf("%s", operation);

    // Convert first character to uppercase to simplify checking
    char opType = toupper(operation[0]);

    if (opType == 'A') {
        // Arithmetic
        printf("Enter two numbers: ");
        scanf("%d %d", &number1, &number2);

        printf("Choose an operator (+, -, x, /): ");
        scanf(" %c", &operator);

        switch (operator) {
            case '+':
                result = number1 + number2;
                break;
            case '-':
                result = number1 - number2;
                break;
            case 'X':
            case 'x':
            case '*':
                result = number1 * number2;
                break;
            case '/':
                if (number2 != 0) {
                    result = number1 / number2;
                } else {
                    printf("Error: Division by zero\n");
                    return 1;
                }
                break;
            default:
                printf("Invalid operator\n");
                return 1;
        }
        printf("Result: %d\n", result);

    } else if (opType == 'T') {
        // Trigonometry
        double angleInDegrees, angleInRadians;

        printf("Enter an angle in degrees: ");
        scanf("%lf", &angleInDegrees);

        angleInRadians = angleInDegrees * (M_PI / 180.0);

        printf("Sine, Cosine, or Tangent? (S/C/T): ");
        scanf(" %c", &trig);
        trig = toupper(trig);

        switch (trig) {
            case 'S':
                printf("Sine: %.2lf\n", sin(angleInRadians));
                break;
            case 'C':
                printf("Cosine: %.2lf\n", cos(angleInRadians));
                break;
            case 'T':
                printf("Tangent: %.2lf\n", tan(angleInRadians));
                break;
            default:
                printf("Invalid trigonometric option\n");
                return 1;
        }

    } else if (opType == 'G') {
        printf("Graphing not implemented yet\n");
    } else {
        printf("Invalid operation type\n");
        return 1;
    }

    return 0;
}