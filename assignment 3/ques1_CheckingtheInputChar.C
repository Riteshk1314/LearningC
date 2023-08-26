#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    
    // Prompt the user to enter a character
    printf("Enter a character: ");
    
    // store the input
    scanf("%c", &input);
    
    // Check if the entered character is a digit
    if (isdigit(input)) {
        printf("You have entered a digit.\n");
    }
    // Check if the entered character is an uppercase letter
    else if (isupper(input)) {
        printf("You have entered an uppercase letter.\n");
    }
    // Check if the entered character is a lowercase letter
    else if (islower(input)) {
        printf("You have entered a lowercase letter.\n");
    }
    // The character is not a digit, uppercase, or lowercase letter
    else {
        printf("You have entered a special symbol.\n");
    }
    
    return 0;
}
