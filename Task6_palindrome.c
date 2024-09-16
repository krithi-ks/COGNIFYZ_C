// C PROGRAM - COGNIFYZ
// TASK 6 - PALINDROME CHECKER

#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[100], rev_str[100];

    // Read the word or phrase
    printf("\nEnter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    // To remove newline character
    str[strcspn(str, "\n")] = 0; // string complementary span

    // Copying string from str to rev_str
    strcpy(rev_str, str);

    // Reverse the copied string
    strrev(rev_str);

    // Palindrome or not
    // Compare input string and reversed string including case
    if (strcasecmp(str, rev_str) == 0)
        printf("\"%s\" is a PALINDROME.", str);
    else
        printf("\"%s\" is NOT A PALINDROME.", str);   
}