#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Compare the first two numbers to find the greater one
    if (num1 >= num2) {
        // If num1 is greater than or equal to num2
        if (num1 >= num3) {
            // If num1 is also greater than or equal to num3, then num1 is the greatest
            printf("%d is the greatest.\n", num1);
        } else {
            // If num1 is not greater than num3, then num3 is the greatest among the three
            printf("%d is the greatest.\n", num3);
        }
    } else {
        // If num2 is greater than num1
        if (num2 >= num3) {
            // If num2 is also greater than or equal to num3, then num2 is the greatest
            printf("%d is the greatest.\n", num2);
        } else {
            // If num2 is not greater than num3, then num3 is the greatest among the three
            printf("%d is the greatest.\n", num3);
        }
    }
    
    return 0;
}
