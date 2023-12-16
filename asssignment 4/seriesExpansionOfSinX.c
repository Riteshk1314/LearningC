#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return (double)n * factorial(n - 1);
    }
}

// Function to calculate sin(x) using the Taylor series expansion up to x^7
double calculateSin(double x) {
    double result = 0;
    int sign = 1;

    for (int n = 0; n <= 7; n += 2) {
        double term = pow(x, n) / factorial(n);
        result += sign * term;
        sign *= -1; // Alternating sign for each term
    }

    return result;
}

int main() {
    double x;

    // Get input from the user
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    // Calculate sin(x) using the Taylor series expansion
    double sinValue = calculateSin(x);

    // Display the result to five significant digits
    printf("sin(%lf) = %.5lf\n", x, sinValue);

    return 0;
}
