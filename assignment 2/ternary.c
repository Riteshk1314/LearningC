#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using the ternary operator to check if num is even or odd
    // If num % 2 is 0, then it's even; otherwise, it's odd
    // If it's even, print "Even", else print "Odd"
    printf("The number is %s.\n", num % 2 == 0 ? "Even" : "Odd");

    return 0;
}
