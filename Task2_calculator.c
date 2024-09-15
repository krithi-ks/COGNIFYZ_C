// C PROGRAM - COGNIFYZ
// TASK 2 - CALCULATOR 

#include <stdio.h>

int A, B;

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

    printf("\nArithmetic operation:"); 
    printf("\n\t(+)Addition\n\t(-)Subtraction\n\t(*)Multiplication\n\t(/)Division\n\t(%%)Modulus\n");

    printf("Choose any operator (+, -, *, /, %%) to perform arithmetic operation: ");
    scanf("%c", &operator);

    switch(operator)
    {
        case '+' : 
            printf("\nOperation: ADDITION\n");
            inputNum();
            printf("Addition of %d and %d = %d", A, B, (A + B));
            break;

        case '-' :
            printf("\nOperation: SUBTRACTION\n");
            inputNum();
            printf("Subtraction of %d and %d = %d", A, B, (A - B));
            break;

        case '*' :
            printf("\nOperation: MULTIPLICATION\n");
            inputNum();
            printf("Multiplication of %d and %d = %d", A, B, (A * B));
            break;

        case '/' :
            printf("\nOperation: DIVISION\n");
            inputNum();
            printf("Division of %d and %d = %d", A, B, (A / B));
            break;
            
        case '%' :
            printf("\nOperation: MODULUS\n");
            inputNum();
            printf("Modulus of %d and %d = %d", A, B, (A % B));
            break;

        default : 
            printf("Enter valid operator!");
    }  
}