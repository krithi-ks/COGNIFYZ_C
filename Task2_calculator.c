// C PROGRAM - COGNIFYZ
// TASK 2 - CALCULATOR 

#include <stdio.h>

int A, B;

// Funtion to get inputs from the user
void inputNum()
{
    printf("\tEnter the value of A: ");
    scanf("%i", &A);
    printf("\tEnter the value of B: ");
    scanf("%i", &B);
}

int main (void)
{
    char operator;

    // Printing the list of operations
    printf("\nArithmetic operation:"); 
    printf("\n\t(+)Addition\n\t(-)Subtraction\n\t(*)Multiplication\n\t(/)Division\n\t(%%)Modulus\n");

    // Prompting user to choose one operator
    printf("Choose any operator (+, -, *, /, %%) to perform arithmetic operation: ");
    scanf("%c", &operator);

    // Arithmetic operation
    switch(operator)
    {
        // Addition
        case '+' : 
            printf("\nOperation: ADDITION\n");
            inputNum();
            printf("Addition of %d and %d = %d", A, B, (A + B));
            break;

        // Subtraction
        case '-' :
            printf("\nOperation: SUBTRACTION\n");
            inputNum();
            printf("Subtraction of %d and %d = %d", A, B, (A - B));
            break;

        // Multiplication
        case '*' :
            printf("\nOperation: MULTIPLICATION\n");
            inputNum();
            printf("Multiplication of %d and %d = %d", A, B, (A * B));
            break;

        // Division
        case '/' :
            printf("\nOperation: DIVISION\n");
            inputNum();
            printf("Division of %d and %d = %d", A, B, (A / B));
            break;

        // Modulus    
        case '%' :
            printf("\nOperation: MODULUS\n");
            inputNum();
            printf("Modulus of %d and %d = %d", A, B, (A % B));
            break;

        // Invalid operator
        default : 
            printf("Enter valid operator!");
    }  
}