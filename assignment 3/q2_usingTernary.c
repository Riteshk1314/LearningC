#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Using ternary conditional operator to find the greatest number
    // Compare num1 and num2, then compare the result with num3
    // Print the appropriate message based on the comparison results
    num1 > num2 ? (num1 > num3 ? printf("num1 is greatest") : printf("num3 is greatest")) : (num2 > num3 ? printf("num2 is greatest") : printf("num3 is greatest"));
    
    return 0;
}
