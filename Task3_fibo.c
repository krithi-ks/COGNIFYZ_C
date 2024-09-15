// C PROGRAM - COGNIFYZ
// TASK 3 - FIBONACCI SERIES

#include <stdio.h>

int num;
void fibo(int number);

int main (void)
{
    do
    {
        // Prompt user to get number of terms to be printed
        printf("Enter number of terms: ");
        scanf("%d", &num);

        // Check for invalid digit
        (num <= 0) ? printf("Invalid!\n") : fibo(num);
    } while (num <= 0); 
}

// Fibonacci Series Logic
void fibo(int number) {
    int n1 = 0, n2 = 1, nxt;
    printf("Fibonacci Series up to %i terms:\n", num);

    // Printing logic for first two terms in series
    if (num == 1) 
        printf("%d", n1);
    else 
        printf("%d\t%d\t", n1, n2);

    // Printing remaining terms
    for (int i = 3; i <= num; i++) {
        nxt = n1 + n2;
        printf("%d\t", nxt);
        n1 = n2;
        n2 = nxt;
    }
}