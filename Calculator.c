#include <stdio.h>
#include <math.h>
int main() {
    char operation;
    int number1, number2;
    int result;
    char operator;
    char trig;

    printf("Enter the type of operation: A for Arithmetic T for Trigonometry G for Graphing\n");
    scanf(" %c", &operation);

    // Arithmetic
    if (operation == 'A' || operation == 'a') { 
        printf("Enter two numbers: ");
        scanf("%d %d", &number1, &number2);
        printf("Choose an operator (+, -, *, /): ");
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
    } 
    // Trigonometry
    else if (operation == 'T' || operation == 't') { 
        double angleInDegrees, angleInRadians;
        printf("Enter an angle in degrees: ");
        scanf("%lf", &angleInDegrees);
        
        angleInRadians = angleInDegrees * (M_PI / 180);
        printf("Sine, Cosine, or Tangent: S for sine, C for cos, T for Tangent\n");
        scanf(" %c", &trig);

        switch (trig) {
            case 'S':
            case 's':
                printf("Sine: %.2lf\n", sin(angleInRadians));
                break;
            case 'C':
            case 'c':
                printf("Cosine: %.2lf\n", cos(angleInRadians));
                break;
            case 'T':
            case 't':       
                printf("Tangent: %.2f\n", tan(angleInRadians));
                break;
            default:
            printf("No inverses or you put something random\n");
            return 1;
        }
    }
    // Graphing
    else if (operation == 'G' || operation == 'g') {
        printf("Graphing not made yet\n");
    }
}
