#include <stdio.h>

int main() {
    int days, paise_total = 0, rupees_total = 0;

    // Input: Taking days, paise, and rupees as input
    scanf("%d %d %d", &days, &paise_total, &rupees_total);

    if (days >= 1 && days <= 5) {
        // Calculate paise for the given range directly using a formula
        paise_total += days * 50;
    } else if (days >= 6 && days <= 10) {
        // Calculate paise and rupees separately for the given range
        paise_total += 5 * 50 + (days - 5);
        rupees_total += days - 5;
    } else {
        // Calculate paise and rupees separately for the last range
        paise_total += 5 * 50 + 5 + (days - 10) * 10;
        rupees_total += 5 + (days - 10);
    }

    // Output: Print the total amount in rupees and paise
    printf("Amount to be paid is %d rupees and %d paise", rupees_total, paise_total);

    return 0;
}







//CODE USING CONCEPT OF LOOP
        ||
        ||
        ||
        ||
       \\//  
        \/ 
            
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
