#include <stdio.h>

int main() {
    int n;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check divisibility
    if (n % 5 == 0 && n % 8 == 0) {
        printf("The number %d is divisible by both 5 and 8.\n", n);
    } else if (n % 5 == 0) {
        printf("The number %d is divisible by 5.\n", n);
    } else if (n % 8 == 0) {
        printf("The number %d is divisible by 8.\n", n);
    } else {
        printf("The number %d is not divisible by either 5 or 8.\n", n);
    }

    return 0;
}
