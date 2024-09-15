// C PROGRAM - COGNIFYZ
// TASK 1 - STRING REVERSAL

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkDigit(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            return 1; // Input has a number
        }
    }
}

int main (void)
{
    char input[100]; 
    int IsNum;

    // Prompt an user for a string 
    // Repeat if it is an integer
    do
    {
        // Prompt an user to enter the string
        printf("\nEnter the string: ");
        scanf("%s", input);

        // Check for digit (Function call)
        IsNum = checkDigit(input);
        if (IsNum == 1) {
            printf("Invalid character!\nPlease enter a string!\n");
        }
    }
    while (IsNum == 1);

    printf("\nThe entered string is: %s\n", input);  

    // String Reversal Logic
    // strrev() is a built-in string function used to reverse a string
    printf("The reversed string is: %s", strrev(input)); 
}