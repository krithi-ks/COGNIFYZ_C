// C PROGRAM - COGNIFYZ
// TASK 9 - ROCK-PAPER-SCISSORS GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void) 
{
    char *options[] = {"ROCK", "PAPER", "SCISSORS"};
    char Userchoice[10], *Compchoice;
    // Seeding random number generation
    srand(time(0));
    
    // User Choice
    printf("\nROCK-PAPER-SCISSORS GAME!\n");
    printf("Enter your choice: ");
    scanf("%s", Userchoice);

    printf("\nYour choice: %s\n", Userchoice);

    // Computer's Choice
    Compchoice = options[rand() % 3]; // Random number between 0 and 2
    printf("Computer's choice: %s\n", Compchoice);

    // Determine Winner
    if ((Userchoice[0] == 'R' || Userchoice[0] == 'r') && (Compchoice[0] == 'S' || Compchoice[0] == 's') ||
        (Userchoice[0] == 'P' || Userchoice[0] == 'p') && (Compchoice[0] == 'R' || Compchoice[0] == 'r') ||
        (Userchoice[0] == 'S' || Userchoice[0] == 's') && (Compchoice[0] == 'P' || Compchoice[0] == 'p'))
        printf("\nCONGRATS, YOU WIN!\n");
    else if (toupper(Userchoice[0]) == toupper(Compchoice[0]))
        printf("\nTIE!\n");
    else
        printf("\nOOPS! COMPUTER WINS...\n");
}
