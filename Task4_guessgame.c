// C PROGRAM - COGNIFYZ
// TASK 4 - GUESSING GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnum;
void randnum() {
    // Seeding random number generator
    srand(time(NULL));

    // To generate a random number starts from 0 to 20
    rnum = (rand() % 21);
}
int main (void)
{
    int guess = 0;
    // randnum function call
    randnum(guess);

    printf("GUESSING GAME STARTS NOW!\n");
    printf("Dear User,Total Chance=10, ALL THE BEST!\nGuess any number starts from 0 to 20\n");

    // Loop for 10 chances
    int i = 1, result;
    while (i <= 10) {
        printf("\nGuess %d: ", i);
        scanf("%d", &guess);

        // Check for correctness
        if (guess == rnum) {
            printf("Congrats, You are correct!");
            result = 1;
            break;
        }
        else if (guess < rnum)
            printf("Lower than the number!");
        else
            printf("Higher than the number");
        
        i++;
    }

    // Result of the game
    if (result == 1)
        printf("\nThe number is %d", rnum);
    else 
        printf("\nOops! You lost.\nPlease Try Again!");
}