#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2lf, %.2lf", root1, root2);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}
