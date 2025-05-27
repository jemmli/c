#include <stdio.h>
#include <math.h>
int main() {
        double base;
        double exponent;
        double result = power(double (base), double (exponent));
        printf("Give me the number and the exponent of that number: ");
        scanf("%lf %lf", &base, &exponent);

        printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);
        return 0;
}