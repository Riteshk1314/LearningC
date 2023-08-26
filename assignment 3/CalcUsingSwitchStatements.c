#include <stdio.h>

int main() {
    // Declare variables to store user input, operation, and result
    float num1, num2, result ;
    char operation;
    
    // Input two numbers from the user
    printf("Enter 2 numbers: ");
    scanf("%f %f", &num1, &num2);
    
    // Input the desired operation (+, -, *, /, %) from the user
    printf("Enter operation: ");
    scanf(" %c", &operation); // Adding a space before %c to consume any whitespace
    
    // Use a switch statement to perform the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2; // Addition
            break;
        case '-':
            result = num1 - num2; // Subtraction
            break;
        case '*':
            result = num1 * num2; // Multiplication
            break;
        case '/':
            result = num1 / num2; // Division
            break;
        case '%':
            // Convert numbers to integers and calculate remainder
            result = (int)num1 % (int)num2;
            break;
        default:
            // Invalid operation entered
            printf("Invalid operation.\n");
            return 1; 
    }
    
    // Display the result of the operation
    printf("Result is %f", result);
    
    // Indicate successful program execution
    return 0;
}
