// C PROGRAM - COGNIFYZ
// TASK 5 - FILE COPY

#include <stdio.h>

int main (void)
{
    FILE *sou, *dest;
    char get[100];
    char fname_sou[50], fname_dest[50];
    
    printf("\nFor file copying, make sure to save the file in the same directory!\n");
    // Prompt for source file name
    printf("Enter the source file name: ");
    scanf("%s", fname_sou);

    // Prompt for destination file name
    printf("Enter the destination file name: ");
    scanf("%s", fname_dest);

    // Open the source file in read mode
    sou = fopen(fname_sou, "r");
    // Open the destination file in write mode
    dest = fopen(fname_dest, "w");

    // Error in opening file 
    if (sou == NULL || dest == NULL) {
        perror("Error Opening File!");
        return 1; 
    }

    // Reading and copying in loop
    while (fgets(get, sizeof(get), sou) != NULL) {
        fputs(get, dest);
    }

    // Closing file
    fclose(sou);
    fclose(dest);

    printf("FILE COPIED SUCCESSFULLY!");
}