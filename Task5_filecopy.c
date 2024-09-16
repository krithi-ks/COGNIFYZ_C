// C PROGRAM - COGNIFYZ
// TASK 5 - FILE COPY

/* Source file name = source_doc.txt
   Destination file name = dest_doc.txt
*/

#include <stdio.h>

int main (void)
{
    FILE *sou, *dest;
    char get[100];
    char fname_sou[50], fname_dest[50];
    
    printf("\nFor file copying, make sure to save the file in the same directory!\nAlso mention the extension.\n");
    // Prompt for source file name
    printf("Enter the source file name: ");
    scanf("%99s", fname_sou);

    // Prompt for destination file name
    printf("Enter the destination file name: ");
    scanf("%99s", fname_dest);

    // Opening source file in read mode and destination file in write mode
    // Printing error if file could not open
    if ((sou = fopen(fname_sou, "r")) == NULL || (dest = fopen(fname_dest, "w")) == NULL) {
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